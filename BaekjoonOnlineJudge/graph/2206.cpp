#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

char arr[1004][1004];
int  visited[2][1004][1004];

int n;
int m;

int res = -1;

void bfs()
{
    queue<pair<int, int>> aq;
    queue<pair<int, int>> bq; // 벽을 한 번이라도 부순 경우

    visited[0][0][0] = 1;

    aq.push({ 0, 0 });

    while (aq.size() || bq.size())
    {
        int y;
        int x;

        // 플러드 필로 가즈아 ㅠㅠ...
        int aSize = aq.size();
        int bSize = bq.size();

        for (int i = 0; i < aSize; i++)
        { 
            tie(y, x) = aq.front();
            aq.pop();

            if (y == (n - 1) && x == (m - 1))
            {
                res = visited[0][y][x];

                return;
            }

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = y + dy[idx];
                int nx = x + dx[idx];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    continue;

                if (visited[0][ny][nx])
                    continue;

                if ('1' == arr[ny][nx])
                {
                    visited[1][ny][nx] = visited[0][y][x] + 1;

                    bq.push({ ny, nx });

                    continue;
                }

                visited[0][ny][nx] = visited[0][y][x] + 1;

                aq.push({ ny, nx });
            }
        }

        for (int i = 0; i < bSize; i++)
        {
            tie(y, x) = bq.front();
            bq.pop();

            if (y == (n - 1) && x == (m - 1))
            {
                res = visited[1][y][x];

                return;
            }

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = y + dy[idx];
                int nx = x + dx[idx];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    continue;

                if (visited[1][ny][nx])
                    continue;

                if ('1' == arr[ny][nx])
                    continue;

                visited[1][ny][nx] = visited[1][y][x] + 1;

                bq.push({ ny, nx });
            }
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

    visited[0][0][0] = 1;

    bfs();

    // cout << '\n';

    // for (int y = 0; y < n; y++)
    // {
    //     for (int x = 0; x < m; x++)
    //     {
    //         cout << visited[0][y][x] << ' ';
    //     }

    //     cout << '\n';
    // }

    // cout << '\n';

    // for (int y = 0; y < n; y++)
    // {
    //     for (int x = 0; x < m; x++)
    //     {
    //         cout << visited[1][y][x] << ' ';
    //     }

    //     cout << '\n';
    // }

    cout << res;

    return 0;
}