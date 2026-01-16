#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;

ll res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    for (ll val : views::iota(a, b + 1))
    {
        ll temp = val * (val + 1) / 2;

        res *= temp;
        res %= 14579;
    }

    println("{}", res);

    return 0;
}
