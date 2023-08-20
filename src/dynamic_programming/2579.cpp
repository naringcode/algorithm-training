#include <bits/stdc++.h>

using namespace std;

int n;

int arr[304];
int dp[3][304];

int go(int idx, int cnt)
{
    if (3 == cnt)
        return -999'999'999;

    if (idx == n - 1)
        return arr[idx];

    if (idx >= n)
        return -999'999'999;

    int& memo = dp[cnt][idx];

    if (-1 != memo)
        return memo;

    memo = max(go(idx + 1, cnt + 1), go(idx + 2, 1)) + arr[idx];

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << max(go(0, 1), go(1, 1));

    return 0;
}