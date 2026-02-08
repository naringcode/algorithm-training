#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

using ll = long long;

int m;
int n;

ll arr[1'000'004];

ll l = 1;
ll r;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        r = max(r, arr[i]);
    }

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += arr[i] / mid;
        }

        if (cnt >= m)
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << res;

    return 0;
}
