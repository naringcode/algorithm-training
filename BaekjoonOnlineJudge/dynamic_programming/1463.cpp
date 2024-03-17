#include <bits/stdc++.h>

using namespace std;

int dp[1'000'004];

int n;

int go(int n)
{
    if (dp[n] || 1 == n)
    {
        return dp[n];
    }

    int ret = 999'999'999;

    if (0 == n % 3)
    {
        ret = go(n / 3) + 1;
    }
    
    if (0 == n % 2)
    {
        ret = min(ret, go(n / 2) + 1);
    }
    
    dp[n] = min(ret, go(n - 1) + 1);

    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    // bottom-up
    //
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++)
    {
        go(i);
    }

    cout << dp[n];

    return 0;
}
