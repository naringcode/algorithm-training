#include <bits/stdc++.h>

using namespace std;

int n;
uint64_t dp[46];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 점화식
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < 46; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cin >> n;

    cout << dp[n];

    return 0;
}
