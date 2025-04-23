#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int dp[1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;

    for (int i = 5; i < n + 1; i++)
    {
        dp[i] = !dp[i - 1] || !dp[i - 3] || !dp[i - 4];
    }

    println("{}", dp[n] ? "SK" : "CY");

    return 0;
}
