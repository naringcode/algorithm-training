#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;

int arr[54][54];
int visited[54][54];

int l;
int r;

vector<pair<int, int>> vec;

int res = 0;

pair<int, int> dfs(int y, int x, bool* outUsed)
{
    pair<int, int> ret{ 1, arr[y][x] };

    visited[y][x] = true;

    vec.push_back({ y, x });

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            continue;

        if (true == visited[ny][nx])
            continue;

        int dist = abs(arr[ny][nx] - arr[y][x]);

        if (l <= dist && dist <= r)
        {
            *outUsed = true;

            auto temp = dfs(ny, nx, outUsed);

            ret.first  += temp.first;
            ret.second += temp.second;
        }
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l >> r;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    bool used = true;

    while (used)
    {
        pair<int, int> ret;

        used = false;
        
        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < n; x++)
            {
                if (visited[y][x])
                    continue;

                vec.clear(); // clear를 적용시키는 위치 주의

                ret = dfs(y, x, &used);

                if (1 == ret.second)
                    continue;

                ret.second = ret.second / ret.first;

                for (auto& pair : vec)
                {
                    arr[pair.first][pair.second] = ret.second;
                }
            }
        }

        if (true == used)
        {
            memset(visited, 0x00, sizeof(visited));

            res++;
        }
    }

    cout << res;

    return 0;
}
