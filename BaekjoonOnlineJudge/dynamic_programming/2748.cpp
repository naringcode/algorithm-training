#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll dp[100];

ll go(ll n)
{
    if (n <= 2)
        return 1;

    ll& ret = dp[n];

    if (0 != ret)
        return ret;

    ret = go(n - 1) + go(n - 2);

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cout << go(n);

    return 0;
}