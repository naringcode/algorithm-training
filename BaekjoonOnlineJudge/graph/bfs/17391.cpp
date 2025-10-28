#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int dy[]{ 0, 1 };
int dx[]{ 1, 0 };

int n;
int m;

int board[304][304];
bool visited[304][304];

int res;

void go()
{
    // y, x, cost
    queue<tuple<int, int, int>> q;

    for (int dist : views::iota(1, board[0][0] + 1))
    {
        q.push({ dist, 0, 1 });
        q.push({ 0, dist, 1 });

        visited[dist][0] = true;
        visited[0][dist] = true;
    }

    while (q.size() > 0)
    {
        auto [y, x, cost] = q.front();
        q.pop();

        if (y == n - 1 && x == m - 1)
        {
            res = cost;

            return;
        }

        for (int dist : views::iota(1, board[y][x] + 1))
        {
            for (int dir : views::iota(0, ssize(dy)))
            {
                int ny = y + dist * dy[dir];
                int nx = x + dist * dx[dir];

                if (ny >= n || nx >= m)
                    continue;

                if (visited[ny][nx] == true)
                    continue;

                visited[ny][nx] = true;

                q.push({ ny, nx, cost + 1 });
            }
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

    go();

    println("{}", res);

    return 0;
}
