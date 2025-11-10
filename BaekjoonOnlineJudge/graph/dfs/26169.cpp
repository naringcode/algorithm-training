#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr int SIZE = 5;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int board[5][5];
bool visited[5][5];

int sy;
int sx;

void go(int y, int x, int mv, int apples)
{
    if (apples == 2)
    {
        println("1");

        exit(0);
    }

    if (mv == 3)
        return;

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

        go(ny, nx, mv + 1, apples + board[ny][nx]);

        visited[ny][nx] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (auto [y, x] : views::cartesian_product(views::iota(0, SIZE), views::iota(0, SIZE)))
    {
        cin >> board[y][x];
    }

    cin >> sy >> sx;

    visited[sy][sx] = true;

    go(sy, sx, 0, board[sy][sx]);

    println("0");

    return 0;
}
