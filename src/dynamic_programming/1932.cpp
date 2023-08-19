#include <bits/stdc++.h>

using namespace std;

int n;

int arr[504][504];
int dp[504][504];

int go(int depth, int idx)
{
    if (depth == n - 1)
        return arr[depth][idx];

    int& memo = dp[depth][idx];

    if (-1 != memo)
        return memo;

    memo = max(go(depth + 1, idx), go(depth + 1, idx + 1)) + arr[depth][idx];

    // cout << depth << " : " << idx << " : " << memo << '\n';

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
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << go(0, 0);

    return 0;
}
