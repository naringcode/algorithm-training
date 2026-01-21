#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;
ll c;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;
    c %= 2;

    res = a;

    while (c--)
    {
        res ^= b;
    }

    println("{}", res);

    return 0;
}
