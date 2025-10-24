#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ 1, 0 };
const int dx[]{ 0, 1 };

int n;
int m;

int board[304][304];
bool visited[304][304];

int res;

void go(int y, int x)
{
    if (y == n - 1 && x == m - 1)
    {
        println("Yes");
        
        exit(0);
    }

    if (visited[y][x] == true)
        return;

    visited[y][x] = true;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (board[ny][nx] == 0)
            continue;

        go(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // cin >> n >> m;
    cin >> m >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> board[y][x];
    }

    go(0, 0);

    println("No");

    return 0;
}
