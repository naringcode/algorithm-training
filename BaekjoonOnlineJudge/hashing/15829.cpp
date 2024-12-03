#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll l;
string str;

ll r = 1;
ll m = 1234567891;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> l >> str;

    for (ll i = 0; i < l; i++)
    {
        res = (res + (str[i] - 'a' + 1) * r) % m;
        r = (r * 31) % m;
    }

    cout << res;

    return 0;
}
