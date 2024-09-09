#include <bits/stdc++.h>

using namespace std;

int n;
int nun;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> pairs[6];
        memset(pairs, 0x00, sizeof(pairs));

        for (int j = 0; j < 6; j++)
        {
            pairs[j].second = j + 1;
        }

        for (int j = 0; j < 4; j++)
        {
            cin >> nun;

            pairs[nun - 1].first++;
        }

        sort(pairs, pairs + 6, greater());

        if (4 == pairs[0].first)
        {
            res = max(res, 50000 + pairs[0].second * 5000);
        }
        else if (3 == pairs[0].first)
        {
            res = max(res, 10000 + pairs[0].second * 1000);
        }
        else if (2 == pairs[0].first)
        {
            if (2 == pairs[1].first)
            {
                res = max(res, 2000 + (pairs[0].second * 500) + (pairs[1].second * 500));
            }
            else
            {
                res = max(res, 1000 + pairs[0].second * 100);
            }
        }
        else
        {
            res = max(res, pairs[0].second * 100);
        }
    }

    cout << res;

    return 0;
}