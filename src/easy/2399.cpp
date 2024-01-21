#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<ll> vec;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll input;
        cin >> input;

        vec.push_back(input);
    }

    for (int idxA = 0; idxA < vec.size(); idxA++)
    {
        for (int idxB = 0; idxB < vec.size(); idxB++)
        {
            res += abs(vec[idxA] - vec[idxB]);
        }
    }

    cout << res;

    return 0;
}
