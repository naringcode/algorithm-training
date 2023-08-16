#include <bits/stdc++.h>

using namespace std;

int n;

int dp[1'000'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= 1'000'000; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] %= 15746;
    }

    cin >> n;

    cout << dp[n];

    return 0;
}
