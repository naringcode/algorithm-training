#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int arr[104][104];
int visited[104][104];

int h;
int w;

int timeCnt;
int cellCnt;

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

        if (1 == arr[ny][nx])
        {
            arr[ny][nx] = 2;

            visited[ny][nx] = true;
        }
        else
        {
            dfs(ny, nx);
        }
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

            if (1 == arr[y][x])
            {
                cellCnt++;
            }
        }
    }

    while (cellCnt)
    {
        memset(visited, 0x00, sizeof(visited));

        dfs(0, 0);

        int temp = 0;

        timeCnt++;

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                if (2 == arr[y][x])
                {
                    arr[y][x] = 0;

                    temp++;
                }
            }
        }

        if (0 == cellCnt - temp)
            break;

        cellCnt -= temp;
    }

    cout << timeCnt << '\n';
    cout << cellCnt;
    
    return 0;
}