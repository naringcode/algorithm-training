#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll mn = numeric_limits<ll>::max();

tuple<ll, ll, ll> res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (ll a = 1; a <= n; a++)
    {
        for (ll b = 1; b <= n; b++)
        {
            if (a * b > n)
                break;

            if (0 != n % (a * b))
                continue;

            ll c = n / (a * b);

            ll temp = 2 * (a * b + b * c + a * c);
            
            if (mn > temp)
            {
                mn = temp;

                res = tie(a, b, c);
            }
        }
    }

    cout << get<0>(res) << ' ' << get<1>(res) << ' ' << get<2>(res);

    return 0;
}
