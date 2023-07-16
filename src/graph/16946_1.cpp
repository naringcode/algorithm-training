#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;
int m;

char arr[1004][1004];
bool visited[1004][1004];

set<pair<int, int>> walls;

int res[1004][1004];

int dfs(int y, int x)
{
    int ret = 1;

    visited[y][x] = true;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if ('1' == arr[ny][nx])
        {
            walls.insert({ ny, nx });

            continue;
        }

        if (visited[ny][nx])
            continue;

        visited[ny][nx] = true;

        ret += dfs(ny, nx);
    }

    return ret;
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

            if ('1' == arr[y][x])
            {
                res[y][x] = 1;
            }
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if ('0' == arr[y][x] && false == visited[y][x])
            {
                int weight = dfs(y, x);

                for (auto& pair : walls)
                {
                    res[pair.first][pair.second] += weight;
                }

                walls.clear();
            }
        }
    }
    
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cout << res[y][x] % 10; // 10으로 나눈 나머지 출력 문제를 제에바아알 잘 읽자
        }

        cout << '\n';
    }

    return 0;
}