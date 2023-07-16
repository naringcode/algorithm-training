#include <bits/stdc++.h>

using namespace std;

int t;

int k;
int n;

int dp[16][16];


int make_dp(int y, int x)
{
    if (dp[y][x])
        return dp[y][x];

    if (0 == y)
    {
        dp[y][x] = x;

        return x;
    }

    int ret = 0;

    for (int i = 0; i <= x; i++)
    {
        ret += make_dp(y - 1, i);
    }

    dp[y][x] = ret;

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> k >> n;

        cout << make_dp(k, n) << '\n';
    }

    return 0;
}