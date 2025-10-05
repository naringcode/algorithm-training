#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int h;
int w;
int n;

int sy;
int sx;

char board[1004][1004];
bool visited[1004][1004];

int res;

int go(char target)
{
    memset(visited, 0x00, sizeof(visited));

    // y, x, dist
    queue<tuple<int, int, int>> q;
    q.push({ sy, sx, 0 });

    visited[sy][sx] = true;

    while (q.size() > 0)
    {
        auto [y, x, dist] = q.front();
        q.pop();

        if (board[y][x] == target)
        {
            sy = y;
            sx = x;

            return dist;
        }

        for (int dir : views::iota(0, ssize(dy)))
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;

            if (board[ny][nx] == 'X')
                continue;

            if (visited[ny][nx] == true)
                continue;

            visited[ny][nx] = true;

            q.push({ ny, nx, dist + 1 });
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> w >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
    {
        cin >> board[y][x];

        visited[y][x] = -1;

        if (board[y][x] == 'S')
        {
            sy = y;
            sx = x;
        }
    }

    for (int i : views::iota(0, n))
    {
        char target = '1' + i;

        int dist = go(target);
        res += dist;
    }

    println("{}", res);

    return 0;
}
