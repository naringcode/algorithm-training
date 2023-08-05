#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;
int k;

int arr[104];
int dp[10'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(dp, dp + 10'004, INF);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i]; j <= k; j++)
        {
            dp[j] = min(dp[j], dp[j - arr[i]] + 1);
        }
    }

    if (INF == dp[k])
    {
        cout << -1;
    }
    else
    {
        cout << dp[k];
    }

    return 0;
}
