#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

ll dp[54];
ll cnt[54];

ll go(ll n)
{
    ll& memo = dp[n];

    if (memo != -1)
        return memo;

    if (n < 2)
    {
        memo = n;

        cnt[n] = 1;
    }
    else
    {
        memo = (go(n - 2) + go(n - 1)) % 1'000'000'007;

        cnt[n] = cnt[n - 2] + cnt[n - 1] + 1;
        cnt[n] %= 1'000'000'007;
    }

    return memo;
}

int main()
{
    ll n;
    cin >> n;

    fill(dp, dp + n + 1, -1);
    
    go(n);

    cout << cnt[n];

    return 0;
}
