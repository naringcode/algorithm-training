#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int w;
int h;

int sy;
int sx;

char board[24][24];
bool visited[24][24];

int res;

void go(int y, int x)
{
    if (visited[y][x] == true)
        return;

    visited[y][x] = true;
    res++;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= h || nx >= w)
            continue;

        if (board[ny][nx] != '.')
            continue;

        go(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> w >> h;

        if (w == 0 || h == 0)
            break;

        for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
        {
            cin >> board[y][x];
            visited[y][x] = false;

            if (board[y][x] == '@')
            {
                sy = y;
                sx = x;
            }
        }

        res = 0;

        go(sy, sx);

        println("{}", res);
    }

    return 0;
}
