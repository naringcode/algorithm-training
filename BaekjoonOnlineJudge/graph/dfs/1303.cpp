#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constinit int INF = 99'999'999;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int n;
int m;

char board[104][104];
bool visited[104][104];

int powerW;
int powerB;

int go(int y, int x)
{
    int ret = 1;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= m || nx >= n)
            continue;

        if (board[y][x] != board[ny][nx])
            continue;

        if (visited[ny][nx] == true)
            continue;

        visited[ny][nx] = true;

        ret += go(ny, nx);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, m), views::iota(0, n)))
    {
        cin >> board[y][x];
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, m), views::iota(0, n)))
    {
        if (visited[y][x] == true)
            continue;

        visited[y][x] = true;

        int power = go(y, x);
        power *= power;

        if (board[y][x] == 'W')
        {
            powerW += power;
        }
        else
        {
            powerB += power;
        }
    }

    println("{} {}", powerW, powerB);

    return 0;
}
