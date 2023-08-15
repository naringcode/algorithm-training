#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll dp[44];

ll fibo(ll n)
{
    if (1 == n || 2 == n)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}

ll fibo_dp(ll n)
{
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = i - 2;
    }

    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cout << fibo(n) << ' ' << fibo_dp(n);

    return 0;
}
