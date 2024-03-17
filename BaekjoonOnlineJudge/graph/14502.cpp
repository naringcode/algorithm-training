#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int h;
int w;

int arr[10][10];
int area[10][10];

bool visited[10][10];

vector<pair<int, int>> viruses;
vector<pair<int, int>> walls;
vector<pair<int, int>> tiles;

int res = 0;

void dfs(int y, int x)
{
    visited[y][x] = true;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= h || nx >= w)
            continue;

        if (true == visited[ny][nx])
            continue;

        if (0 != area[ny][nx])
            continue;

        dfs(ny, nx);
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
            cin >> arr[y][x];

            if (0 == arr[y][x])
            {
                tiles.push_back({ y, x });
            }
            else if (1 == arr[y][x])
            {
                walls.push_back({ y, x });
            }
            else
            {
                viruses.push_back({ y, x });
            }
        }
    }

    for (int i = 0; i < tiles.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                memcpy(area, arr, sizeof(arr));
                memset(visited, 0x00, sizeof(visited));

                area[tiles[i].first][tiles[i].second] = 1;
                area[tiles[j].first][tiles[j].second] = 1;
                area[tiles[k].first][tiles[k].second] = 1;

                for (auto& virus : viruses)
                {
                    dfs(virus.first, virus.second);
                }

                int safe = 0;

                for (int y = 0; y < h; y++)
                {
                    for (int x = 0; x < w; x++)
                    {
                        if (false == visited[y][x] && 0 == area[y][x])
                        {
                            safe++;
                        }
                    }
                }

                res = max(res, safe);
            }
        }
    }

    cout << res;
    
    return 0;
}
