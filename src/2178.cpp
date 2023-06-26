#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

char arr[104][104];
int  visited[104][104];

int n;
int m;

void bfs(int y, int x)
{
    queue<pair<int, int>> q;

    visited[y][x] = 1;

    q.push({ y, x });

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();

        for (int idx = 0; idx < 4; idx++)
        {
            int ny = y + dy[idx];
            int nx = x + dx[idx];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;

            if (0 != visited[ny][nx])
                continue;

            if ('0' == arr[ny][nx])
                continue;

            visited[ny][nx] = visited[y][x] + 1;

            q.push({ ny, nx });
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];
        }
    }

    bfs(0, 0);

    cout << visited[n - 1][m - 1];

    return 0;
}
