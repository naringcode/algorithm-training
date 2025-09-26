#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int n;
int m;
int k;

bool board[104][104];
bool visited[104][104];

int res;

int go(int y, int x)
{
    if (visited[y][x] == true)
        return 0;

    visited[y][x] = true;

    int ret = 1;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (board[ny][nx] != true)
            continue;

        ret += go(ny, nx);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    while (k--)
    {
        int y;
        int x;

        cin >> y >> x;
        y--;
        x--;

        board[y][x] = true;
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        if (board[y][x] == true && visited[y][x] == false)
        {
            int temp = go(y, x);

            res = max(res, temp);
        }
    }

    println("{}", res);

    return 0;
}
