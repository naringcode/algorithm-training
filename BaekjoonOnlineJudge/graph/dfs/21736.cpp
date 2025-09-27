#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int n;
int m;

char board[604][604];
bool visited[604][604];

int sy;
int sx;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> board[y][x];

        if (board[y][x] == 'I')
        {
            sy = y;
            sx = x;
        }
    }

    queue<pair<int, int>> q;
    q.push({ sy, sx });
    visited[sy][sx] = true;

    while (q.size() > 0)
    {
        auto [y, x] = q.front();
        q.pop();

        for (int dir : views::iota(0, ssize(dy)))
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;

            if (visited[ny][nx] == true)
                continue;

            if (board[ny][nx] == 'X')
                continue;

            if (board[ny][nx] == 'P')
            {
                res++;
            }

            visited[ny][nx] = true;

            q.push({ ny, nx });
        }
    }

    if (res == 0)
    {
        println("TT");
    }
    else
    {
        println("{}", res);
    }

    return 0;
}
