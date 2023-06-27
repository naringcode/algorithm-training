#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int  arr[104][104];
bool visited[104][104];

int n;
int h;

int temp;
int res = 1; // 비가 내리지 않는 경우를 보장

void dfs(int y, int x)
{
    visited[y][x] = true;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            continue;

        if (h >= arr[ny][nx])
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

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (h = 1; h <= 100; h++)
    {
        memset(visited, 0x00, sizeof(visited));

        temp = 0;

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < n; x++)
            {
                if (h < arr[y][x] && false == visited[y][x])
                {
                    dfs(y, x);

                    temp++;
                }
            }
        }

        res = max(res, temp);
    }

    cout << res;
    
    return 0;
}
