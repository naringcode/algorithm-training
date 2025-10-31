#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -2, -2, 0, 0, 2, 2 };
const int dx[]{ -1, 1, -2, 2, -1, 1 };

int n;

int r1;
int c1;
int r2;
int c2;

bool visited[204][204];

int res = -1;

void go()
{
    // y, x, cost
    queue<tuple<int, int, int>> q;
    q.push({ r1, c1, 0 });

    visited[r1][c1] = true;

    while (q.size() > 0)
    {
        auto [y, x, cost] = q.front();
        q.pop();

        if (y == r2 && x == c2)
        {
            res = cost;

            return;
        }

        for (int dir : views::iota(0, ssize(dy)))
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                continue;

            if (visited[ny][nx] == true)
                continue;

            q.push({ ny, nx, cost + 1 });
            
            visited[ny][nx] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> r1 >> c1 >> r2 >> c2;

    go();

    println("{}", res);

    return 0;
}
