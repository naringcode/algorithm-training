#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr int INF = 999'999'999;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;
int m;

char ch;

int arr[54][54];
int visited[54][54];

ll dp[54][54];

bool flag;

ll res;

ll go(int y, int x)
{
    ll& memo = dp[y][x];

    if (-1 != memo)
        return memo;

    memo = 1;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx] * arr[y][x];
        int nx = x + dx[idx] * arr[y][x];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (INF == arr[ny][nx])
            continue;

        if (visited[ny][nx])
        {
            flag = true;

            return -1;
        }

        visited[ny][nx] = true;

        memo = max(memo, go(ny, nx) + 1);

        visited[ny][nx] = false;

        if (true == flag)
            return -1;
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> ch;

            if ('H' == ch)
            {
                arr[y][x] = INF;
            }
            else
            {
                arr[y][x] = ch - '0';
            }
        }
    }

    visited[0][0] = true;

    res = go(0, 0);

    if (true == flag)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    return 0;
}
