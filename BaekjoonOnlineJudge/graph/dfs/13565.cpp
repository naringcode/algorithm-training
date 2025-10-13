#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int m;
int n;

bool visited[1004][1004];
char board[1004][1004];

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

        if (ny < 0 || nx < 0 || ny >= m || nx >= n)
            continue;

        if (board[ny][nx] == '1')
            continue;

        if (visited[ny][nx] == true)    
            continue;

        go(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, m), views::iota(0, n)))
    {
        cin >> board[y][x];
    }

    for (int x : views::iota(0, n))
    {
        if (board[0][x] == '0' && visited[0][x] == false)
        {
            go(0, x);
        }
    }

    for (int x : views::iota(0, n))
    {
        if (visited[m - 1][x] == true)
        {
            println("YES");

            return 0;
        }
    }

    println("NO");

    return 0;
}
