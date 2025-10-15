#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, -1, 0, 1, 1, 1, 0, -1 };
const int dx[]{ 0, 1, 1, 1, 0, -1, -1, -1 };

int board[104][104];
int visited[104][104];

int n;
int m;

bool chk;

int res;

void go(int y, int x)
{
    if (visited[y][x] == true)
        return;

    visited[y][x] = true;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (board[y][x] < board[ny][nx])
        {
            chk = false;
        }

        if (visited[ny][nx] == true)
            continue;

        if (board[y][x] == board[ny][nx])
        {
            go(ny, nx);
        }
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
        if (visited[y][x] == true)
            continue;

        chk = true;

        go(y, x);

        if (chk == true)
        {
            res++;
        }
    }

    println("{}", res);
    
    return 0;
}
