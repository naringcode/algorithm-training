#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int board[5][5];
int visited[5][5];

int r;
int c;

int res = 999'999'999;

void go(int y, int x, int mv, int cnt)
{
    if (board[y][x] == 1)
    {
        cnt++;
        
        if (cnt == 3)
        {
            res = min(res, mv);

            return;
        }
    }

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5)
            continue;

        if (board[ny][nx] == -1)
            continue;

        if (visited[ny][nx] == true)
            continue;

        visited[ny][nx] = true;

        go(ny, nx, mv + 1, cnt);

        visited[ny][nx] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (auto [y, x] : views::cartesian_product(views::iota(0, 5), views::iota(0, 5)))
    {
        cin >> board[y][x];
    }

    cin >> r >> c;

    visited[r][c] = true;
    go(r, c, 0, 0);

    if (res == 999'999'999)
    {
        res = -1;
    }

    println("{}", res);

    return 0;
}
