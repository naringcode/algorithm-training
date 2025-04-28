#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int t;

ll start;
ll interval;
ll cnt;

ll res = numeric_limits<ll>::max();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> t;

    for (int i : views::iota(0, n))
    {
        cin >> start >> interval >> cnt;

        for (int c : views::iota(0, cnt))
        {
            ll val = start + interval * c;

            if (val >= t)
            {
                res = min(res, val - t);

                break;
            }
        }
    }

    println("{}", res == numeric_limits<ll>::max() ? -1 : res);

    return 0;
}
