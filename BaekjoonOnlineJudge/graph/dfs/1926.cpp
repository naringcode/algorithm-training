#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

const int dy[]{ 1, 0, -1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int h;
int w;

int  arr[504][504];
bool visited[504][504];

int mxRes;
int connRes;

int go(int y, int x)
{
    int ret = 1;

    if (visited[y][x])
        return ret;

    visited[y][x] = true;

    for (int dir = 0; dir < 4; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= h || nx >= w)
            continue;

        if (visited[ny][nx])
            continue;

        if (0 == arr[ny][nx])
            continue;

        ret += go(ny, nx);
    }

    return ret;
}

int main(void)
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
        }
    }

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            if (visited[y][x])
                continue;

            if (1 == arr[y][x])
            {
                int temp = go(y, x);

                mxRes = max(mxRes, temp);
                connRes++;
            }
        }
    }

    cout << connRes << '\n' << mxRes;

    return 0;
}
