#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, -1, 0, 1, 1, 1, 0, -1 };
const int dx[]{ 0, 1, 1, 1, 0, -1, -1, -1};

int n;
int m;

int board[254][254];
bool visited[254][254];

int res;

void go(int y, int x)
{
    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (visited[ny][nx] == true)
            continue;

        if (board[ny][nx] == 0)
            continue;

        visited[ny][nx] = true;

        go(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> board[y][x];
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        if (visited[y][x] == false && board[y][x] == 1)
        {
            visited[y][x] = true;

            go(y, x);

            res++;
        }
    }

    println("{}", res);

    return 0;
}
