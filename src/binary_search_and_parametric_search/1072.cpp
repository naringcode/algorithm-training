#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll x;
ll y;

ll l = 1;
ll r = 1'000'000'000LL;

ll atLeast;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> y;

    atLeast = (y * 100) / x;

    if (99 <= atLeast)
    {
        cout << -1;
        
        return 0;
    }

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll nextAvg = (y + mid) * 100 / (x + mid);

        if (nextAvg > atLeast)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l;

    return 0;
}