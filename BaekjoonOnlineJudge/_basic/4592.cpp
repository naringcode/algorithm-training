#include <bits/stdc++.h>

using namespace std;

int t;
int n;

vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> t;

        if (0 == t)
            break;

        res.clear();

        while (t--)
        {
            cin >> n;

            if (res.size() > 0 && res.back() == n)
                continue;

            res.push_back(n);
        }

        for (auto elem : res)
        {
            cout << elem << ' ';
        }

        cout << "$\n";
    }

    return 0;
}
