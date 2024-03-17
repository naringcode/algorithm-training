#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int arr[104][104];
int visited[104][104];

int h;
int w;

int cnt;

void bfs()
{
    queue<pair<int, int>>  q;
    vector<pair<int, int>> erasingVec;

    while (true)
    {
        memset(visited, 0, sizeof(visited));

        visited[0][0] = 1;

        q.push({ 0, 0 });

        while (q.size())
        {
            auto here = q.front();
            q.pop();

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = here.first  + dy[idx];
                int nx = here.second + dx[idx];

                if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                    continue;

                if (0 == arr[ny][nx])
                {
                    if (visited[ny][nx])
                        continue;

                    visited[ny][nx] = 1;

                    q.push({ ny, nx });
                }
                else if (1 == arr[ny][nx])
                {
                    visited[ny][nx]++;

                    if (2 == visited[ny][nx])
                    {
                        erasingVec.push_back({ ny, nx });
                    }
                }
            }
        }

        for (auto& pair : erasingVec)
        {
            arr[pair.first][pair.second] = 0;
        }

        // cout << '\n';
        //
        // for (int y = 0; y < h; y++)
        // {
        //     for (int x = 0; x < w; x++)
        //     {
        //         cout << arr[y][x] << ' ';
        //     }
        //
        //     cout << '\n';
        // }

        if (erasingVec.size())
        {
            cnt++;
        }
        else
        {
            break;
        }

        erasingVec.clear();
    }
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
            cin >> arr[y + 1][x + 1];
        }
    }

    h += 2;
    w += 2;

    bfs();

    cout << cnt;

    return 0;
}
