#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

ll num;
ll dp[10'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // memset(dp, -1, sizeof(dp));

    dp[0] = 1;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        for (int j = num; j <= k; j++)
        {
            dp[j] += dp[j - num];
        }
    }

    cout << dp[k];

    return 0;
}
