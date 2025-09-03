#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int k;
int kX;
int kY;

int dp[2][18][18];
int res;

int go1(int x, int y)
{
    if (x > kX || y > kY)
        return 0;

    if (x == kX && y == kY)
        return 1;

    int memo = dp[0][y][x];
    if (memo != -1)
        return memo;

    memo = go1(x + 1, y) + go1(x, y + 1);

    return memo;
}

int go2(int x, int y)
{
    if (x >= m || y >= n)
        return 0;

    if (x == m - 1 && y == n - 1)
        return 1;

    int memo = dp[1][y][x];
    if (memo != -1)
        return memo;

    memo = go2(x + 1, y) + go2(x, y + 1);

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n >> m >> k;

    if (k != 0)
    {
        k--;
        kX = k % m;
        kY = k / m;

        res = go1(0, 0) * go2(kX, kY);
    }
    else
    {
        res = go2(0, 0);
    }

    println("{}", res);

    return 0;
}
