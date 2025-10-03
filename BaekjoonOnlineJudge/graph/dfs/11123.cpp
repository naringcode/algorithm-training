#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int t;

int h;
int w;

char board[104][104];
bool visited[104][104];

int res;

void go(int y, int x)
{
    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= h || nx >= w)
            continue;

        if (board[ny][nx] == '.')
            continue;

        if (visited[ny][nx] == true)
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

    cin >> t;

    while (t--)
    {
        cin >> h >> w;

        for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
        {
            cin >> board[y][x];
            visited[y][x] = false;
        }

        res = 0;

        for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
        {
            if (board[y][x] == '#' && visited[y][x] == false)
            {
                visited[y][x] = true;

                go(y, x);

                res++;
            }
        }

        println("{}", res);
    }

    return 0;
}
