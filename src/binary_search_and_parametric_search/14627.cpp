#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll s;
ll c;

ll arr[1'000'004];
ll sum;

ll l;
ll r;

bool go(ll mid, ll* remaining)
{
    ll cnt = 0;

    for (ll i = 0; i < s; i++)
    {
        cnt += arr[i] / mid;

        *remaining += arr[i] % mid;
    }

    return cnt >= c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s >> c;

    for (ll i = 0; i < s; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    l = 1;
    r = sum;

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll remaining = 0;

        if (go(mid, &remaining))
        {
            // cout << l << ", " << r << '\n';

            l = mid + 1;
        }
        else
        {
            // cout << l << ", " << r << '\n';

            r = mid - 1;
        }

        // cout << l << ", " << mid << ", " << r << " : " << remaining << '\n';
    }

    cout << sum - r * c;

    return 0;
}