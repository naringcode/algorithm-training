#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = numeric_limits<int>::max();

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int w;
int h;

char board[104][104];

vector<pair<int, int>> c;

int visited[4][104][104];

int res = INF;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> w >> h;

    for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
    {
        cin >> board[y][x];
        
        if (board[y][x] == 'C')
        {
            c.push_back({ y, x });
        }

        for (int dir : views::iota(0, ssize(dy)))
        {
            visited[dir][y][x] = INF;
        }
    }

    auto [sy, sx] = c[0];
    auto [ey, ex] = c[1];

    board[sy][sx] = '.';

    // y, x, dir
    queue<tuple<int, int, int>> q;

    for (int dir : views::iota(0, ssize(dy)))
    {
        q.push({ sy, sx, dir });
        visited[dir][sy][sx] = 0;
    }
    
    while (q.size() > 0)
    {
        auto [y, x, dir] = q.front();
        q.pop();

        if (y == ey && x == ex)
        {
            res = min(res, visited[dir][y][x] / 10'000);

            continue;
        }

        int cost = visited[dir][y][x];
        
        for (int nextDir : views::iota(0, ssize(dy)))
        {
            int ny = y + dy[nextDir];
            int nx = x + dx[nextDir];

            if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;

            if (board[ny][nx] == '*')
                continue;

            int nextCost = cost + 1;

            if (dir != nextDir)
            {
                nextCost += 10'000;
            }

            if (nextCost < visited[nextDir][ny][nx])
            {
                q.push({ ny, nx, nextDir });
                visited[nextDir][ny][nx] = nextCost;
            }
        }
    }

    println("{}", res);

    return 0;
}
