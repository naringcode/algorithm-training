#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int board[5][5];

set<int> mySet;

void go(int y, int x, int mv, int num)
{
    if (mv == 5)
    {
        mySet.insert(num);

        return;
    }

    num *= 10;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5)
            continue;

        go(ny, nx, mv + 1, num + board[ny][nx]);
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

    for (auto [y, x] : views::cartesian_product(views::iota(0, 5), views::iota(0, 5)))
    {
        go(y, x, 0, board[y][x]);
    }

    println("{}", mySet.size());

    return 0;
}
