#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int dp[50004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    ranges::fill(dp, 999'999'999);

    for (int i = 1; i * i <= n; i++)
    {
        dp[i * i] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    println("{}", dp[n]);

    return 0;
}
