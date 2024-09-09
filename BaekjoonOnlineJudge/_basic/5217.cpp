#include <bits/stdc++.h>

using namespace std;

int t;
int n;

vector<pair<int, int>> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        // bad code
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i + j == n)
                {
                    res.push_back({ i, j });
                }
            }
        }
        
        reverse(res.begin(), res.end());

        cout << "Pairs for " << n << ": ";

        while (false == res.empty())
        {
            cout << res.back().first << ' ' << res.back().second;

            res.pop_back();

            if (false == res.empty())
            {
                cout << ", ";
            }
        }

        cout << '\n';
    }

    return 0;
}
