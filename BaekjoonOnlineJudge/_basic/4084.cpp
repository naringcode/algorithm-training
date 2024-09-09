#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vec.resize(4);

    while (true)
    {
        cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];

        if (0 == vec[0] && 0 == vec[1] && 0 == vec[2] && 0 == vec[3])
            break;

        int cnt = 0;

        while (!(vec[0] == vec[1] && vec[0] == vec[2] && vec[0] == vec[3]))
        {
            vector<ll> temp;

            temp.push_back(abs(vec[0] - vec[1]));
            temp.push_back(abs(vec[1] - vec[2]));
            temp.push_back(abs(vec[2] - vec[3]));
            temp.push_back(abs(vec[3] - vec[0]));

            vec = temp;

            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
