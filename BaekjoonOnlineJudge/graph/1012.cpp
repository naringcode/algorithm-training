#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int  arr[54][54];
bool visited[54][54];

int t;

int m;
int n;
int k;

int x, y;

int res;

void dfs(int y, int x)
{
    visited[y][x] = true;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (0 == arr[ny][nx])
            continue;

        if (true == visited[ny][nx])
            continue;

        dfs(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int loopCnt = 0; loopCnt < t; loopCnt++)
    {
        cin >> m >> n >> k;

        memset(arr, 0x00, sizeof(arr));
        memset(visited, 0x00, sizeof(visited));

        res = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;

            arr[y][x] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (1 == arr[i][j] && false == visited[i][j])
                {
                    res++;

                    dfs(i, j);
                }
            }
        }

        cout << res << '\n';
    }
    
    return 0;
}
