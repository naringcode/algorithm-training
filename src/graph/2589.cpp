#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int h;
int w;

char arr[54][54];
int  visited[54][54];

int res = 0;

int bfs(int y, int x)
{
    queue<pair<int, int>> q;
    int ret = 0;

    visited[y][x] = 1;
    
    q.push({ y, x });

    while (q.size())
    {
        auto pos = q.front();

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = pos.first  + dy[i];
            int nx = pos.second + dx[i];

            if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;

            if ('W' == arr[ny][nx])
                continue;

            if (visited[ny][nx])
                continue;

            visited[ny][nx] = visited[pos.first][pos.second] + 1;

            q.push({ ny, nx });

            ret = max(ret, visited[ny][nx]);
        }
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> w;

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            if ('W' == arr[y][x])
                continue;

            memset(visited, 0x00, sizeof(visited));

            res = max(res, bfs(y, x));
        }
    }

    cout << res - 1;

    return 0;
}
