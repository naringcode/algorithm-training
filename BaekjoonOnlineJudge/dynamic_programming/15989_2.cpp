#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int dp[3][10'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[0][0] = 1;

    for (int i = 1; i <= 10'000; i++)
    {
        dp[0][i] = 1;
    }

    for (int i = 2; i <= 10'000; i++)
    {
        dp[1][i] = dp[0][i - 2] + dp[1][i - 2];
    }

    for (int i = 3; i <= 10'000; i++)
    {
        dp[2][i] = dp[0][i - 3] + dp[1][i - 3] + dp[2][i - 3];
    }

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        cout << dp[0][n] + dp[1][n] + dp[2][n] << '\n';
    }

    return 0;
}