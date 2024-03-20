#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll t;

ll n;
ll a;
ll b;
ll c;

ll res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n >> a >> b >> c;

        bool flag = false;

        flag |= (a + b + c) < 55;
        flag |= (35 * 0.3) > a;
        flag |= (25 * 0.3) > b;
        flag |= (40 * 0.3) > c;

        cout << n << ' ' << a + b + c << (flag ? " FAIL" : " PASS") << '\n';
    }

    return 0;
}
