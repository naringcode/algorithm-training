#include <bits/stdc++.h>

using namespace std;

const int dy[]{ -1, -1, 0, 1, 1, 1, 0, -1 };
const int dx[]{ 0, 1, 1, 1, 0, -1, -1, -1 };

int w;
int h;

int v;

bool visited[54][54];
bool arr[54][54];

void go(int y, int x)
{
    if (visited[y][x])
        return;

    visited[y][x] = true;

    for (int dir = 0; dir < 8; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || ny < 0)
            continue;

        if (visited[ny][nx])
            continue;

        if (0 == arr[ny][nx])
            continue;

        go(ny, nx);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> w >> h;

        if (0 == w && 0 == h)
            break;

        memset(visited, 0x00, sizeof(visited));
        memset(arr, 0x00, sizeof(arr));

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                cin >> arr[y][x];
            }
        }

        int res = 0;

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                if (false == visited[y][x] && arr[y][x])
                {
                    res++;

                    go(y, x);
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}
