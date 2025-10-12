#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, -1, 0, 1, 1, 1, 0, -1 };
const int dx[]{ 0, 1, 1, 1, 0, -1, -1, -1 };

int m;
int n;

bool visited[104][104];
char board[104][104];

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

        if (board[ny][nx] == '*')
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

    while (true)
    {
        cin >> m >> n;

        if (m == 0 || n == 0)
            break;

        for (auto [y, x] : views::cartesian_product(views::iota(0, m), views::iota(0, n)))
        {
            cin >> board[y][x];

            visited[y][x] = false;
        }

        res = 0;

        for (auto [y, x] : views::cartesian_product(views::iota(0, m), views::iota(0, n)))
        {
            if (board[y][x] == '@' && visited[y][x] == false)
            {
                res++;

                go(y, x);
            }
        }

        println("{}", res);
    }

    return 0;
}
