#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll k;
ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> n;

    if (n == 1)
    {
        cout << -1;

        return 0;
    }

    ll res = (k * n) / (n - 1);

    if ((k * n) % (n - 1) != 0)
    {
        res++;
    }

    cout << res;

    return 0;
}
