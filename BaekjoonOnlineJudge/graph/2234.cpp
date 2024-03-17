#include <bits/stdc++.h>

using namespace std;

const pair<int, int> delta[4] = { { 0, -1 }, { -1, 0 }, { 0, 1 }, { 1, 0 } };

int n, m;

int arr[54][54];
int layers[54][54]; // 3번 해결 용도
int visited[54][54];

int res1;
int res2;
int res3;

void bfs(int y, int x, int layer)
{
    vector<pair<int, int>> trace;
    int cnt = 1;

    queue<pair<int, int>> q;
    visited[y][x] = true;

    q.push({ y, x });

    trace.push_back({ y, x });

    while (q.size())
    {
        auto here = q.front();
        q.pop();

        for (int idx = 0; idx < 4; idx++)
        {
            // 벽이 있으면 움직이지 못 하게
            if (arr[here.first][here.second] & (1 << idx))
                continue;

            int ny = here.first  + delta[idx].first;
            int nx = here.second + delta[idx].second;

            if (visited[ny][nx])
                continue;

            visited[ny][nx] = true;

            q.push({ ny, nx });

            trace.push_back({ ny, nx });

            cnt++;
        }
    }

    for (auto& here : trace)
    {
        layers[here.first][here.second] = layer;
        visited[here.first][here.second] = cnt;
    }

    res2 = max(res2, cnt);
}

void max_connected(int y, int x)
{
    int layer = layers[y][x];

    for (int idx = 0; idx < 4; idx++)
    {
        // 벽이 있을 때만 체크
        if (arr[y][x] & (1 << idx))
        {
            int ny = y + delta[idx].first;
            int nx = x + delta[idx].second;

            if (ny < 0 || nx < 0 || ny >= m || nx >= n)
                continue;

            int nlayer = layers[ny][nx];

            if (layer != nlayer) // 다른 영역이면
            {
                res3 = max(res3, visited[y][x] + visited[ny][nx]);
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

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (false == visited[y][x])
            {
                res1++;

                bfs(y, x, res1);
            }
        }
    }

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            max_connected(y, x);
        }
    }

    cout << res1 << '\n' << res2 << '\n' << res3 << '\n';

    return 0;
}