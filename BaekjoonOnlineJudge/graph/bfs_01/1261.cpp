#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constinit int INF = 999'999'999;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int n;
int m;

char board[104][104];
int dist[104][104];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> board[y][x];

        dist[y][x] = INF;
    }

    // y, x, cost
    deque<tuple<int, int, int>> dq;

    dq.push_back({ 0, 0, 0 });
    dist[0][0] = 0;

    while (dq.size() > 0)
    {
        auto [y, x, cost] = dq.front();
        dq.pop_front();

        if (y == n - 1 && x == m - 1)
        {
            res = cost;

            break;
        }

        for (int dir : views::iota(0, ssize(dy)))
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;

            if (dist[y][x] + 1 < dist[ny][nx])
            {
                dist[ny][nx] = dist[y][x] + 1;

                if (board[ny][nx] == '1')
                {
                    dq.push_back({ ny, nx, cost + 1 });
                }
                else if (board[ny][nx] == '0')
                {
                    dq.push_front({ ny, nx, cost });
                }
            }
        }
    }

    println("{}", res);

    return 0;
}
