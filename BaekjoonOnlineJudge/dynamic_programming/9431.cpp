#include <bits/stdc++.h>

using namespace std;

int t;
int n;

long long dp[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= 100; i++)
    {
        dp[i] = dp[i - 3] + dp[i - 2];
    }

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        cout << dp[n] << '\n';
    }

    return 0;
}
