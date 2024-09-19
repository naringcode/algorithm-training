#include <bits/stdc++.h>

using namespace std;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int m;
int n;

int arr[504][504];
int dp[504][504];

int go(int y, int x)
{
    if (y == m - 1 && x == n - 1)
        return 1;

    if (-1 != dp[y][x])
        return dp[y][x];

    dp[y][x] = 0;

    for (int dir = 0; dir < 4; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= m || nx >= n)
            continue;

        // 높이가 더 낮은 지점이 아니면?
        if (arr[y][x] <= arr[ny][nx])
            continue;

        dp[y][x] += go(ny, nx);
    }

    return dp[y][x];
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];

            dp[y][x] = -1;
        }
    }

    cout << go(0, 0);

    return 0;
}
