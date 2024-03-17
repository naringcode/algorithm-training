#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;
int m;
int c;

int a;
int b;

int arr[54][54];

// 카운트, 활성, y, x
int dp[54][54][54][54];

int go(int cnt, int id, int y, int x)
{
    //
    if (y > n || x > m || cnt < 0)
        return 0;

    if (y == n && x == m)
    {
        if (0 == cnt && 0 == arr[y][x])
            return 1;

        if (1 == cnt && arr[y][x] > id)
            return 1;

        return 0;
    }

    //
    int& memo = dp[cnt][id][y][x];

    if (-1 != memo)
        return memo;

    memo = 0;

    if (arr[y][x] > id)
    {
        memo += go(cnt - 1, arr[y][x], y, x + 1);
        memo += go(cnt - 1, arr[y][x], y + 1, x);

        memo %= 1'000'007;
    }
    else if (0 == arr[y][x])
    {
        memo += go(cnt, id, y, x + 1);
        memo += go(cnt, id, y + 1, x);
        
        memo %= 1'000'007;
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n >> m >> c;

    for (int i = 1; i <= c; i++)
    {
        cin >> a >> b;

        arr[a][b] = i;
    }

    for (int i = 0; i <= c; i++)
    {
        // n과 m이 1일 경우에 대한 예외 처리(?)
        dp[i][0][1][1] = go(i, 0, 1, 1);
    }
    
    // for (int i = 0; i <= c; i++)
    // {
    //     for (int y = 0; y <= n; y++)
    //     {
    //         for (int x = 0; x <= m; x++)
    //         {
    //             cout << dp[i][0][y][x] << ' ';
    //         }
    //
    //         cout << '\n';
    //     }
    //
    //     cout << '\n';
    // }

    for (int i = 0; i <= c; i++)
    {
        cout << dp[i][0][1][1] << ' ';
    }

    return 0;
}