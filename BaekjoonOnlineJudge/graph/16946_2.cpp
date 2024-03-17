#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;
int m;

char arr[1004][1004];
bool visited[1004][1004];

int weights[1004][1004];
int ids[1004][1004];

int id;

int res[1004][1004];

int get_around(int y, int x)
{
    vector<int> chk;

    int ret = 1;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (chk.end() != find(chk.begin(), chk.end(), ids[ny][nx]))
            continue;

        chk.push_back(ids[ny][nx]);

        ret += weights[ny][nx];
    }

    return ret;
}

void bfs(int y, int x)
{
    vector<pair<int, int>> chk;
    queue<pair<int, int>> q;

    q.push({ y, x });

    visited[y][x] = true;

    int cnt = 1;

    chk.push_back({ y, x });

    while (q.size())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            auto pair = q.front();
            q.pop();

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = pair.first  + dy[idx];
                int nx = pair.second + dx[idx];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    continue;

                if ('1' == arr[ny][nx])
                    continue;

                if (visited[ny][nx])
                    continue;

                visited[ny][nx] = true;

                cnt++;

                chk.push_back({ ny, nx });

                q.push({ ny, nx });
            }
        }
    }

    id++;

    for (auto& pair : chk)
    {
        weights[pair.first][pair.second] = cnt;
        ids[pair.first][pair.second] = id;
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

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if ('0' == arr[y][x] && false == visited[y][x])
            {
                bfs(y, x);
            }
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if ('1' == arr[y][x])
            {
                res[y][x] = get_around(y, x);
            }
        }
    }

    // cout << '\n';

    // for (int y = 0; y < n; y++)
    // {
    //     for (int x = 0; x < m; x++)
    //     {
    //         cout << weights[y][x];
    //     }

    //     cout << '\n';
    // }
    
    // cout << '\n';
    
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cout << res[y][x] % 10;
        }

        cout << '\n';
    }

    return 0;
}