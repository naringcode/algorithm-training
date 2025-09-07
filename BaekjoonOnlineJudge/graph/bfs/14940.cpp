#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int dy[]{ -1, 0, 1, 0 };
int dx[]{ 0, 1, 0, -1 };

int n;
int m;

int arr[1004][1004];
int sy;
int sx;

int res[1004][1004];

void go()
{
    queue<pair<int, int>> q;
    q.push({ sy, sx });

    res[sy][sx] = 0;

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

            if (arr[ny][nx] != 1)
                continue;

            if (res[ny][nx] != -1)
                continue;

            q.push({ ny, nx });
            res[ny][nx] = res[y][x] + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y : views::iota(0, n))
    {
        for (int x : views::iota(0, m))
        {
            cin >> arr[y][x];

            res[y][x] = -1;

            if (arr[y][x] == 2)
            {
                sy = y;
                sx = x;
            }
        }
    }

    go();

    for (int y : views::iota(0, n))
    {
        for (int x : views::iota(0, m))
        {
            if (arr[y][x] == 0)
            {
                print("0 ");
            }
            else
            {
                print("{} ", res[y][x]);
            }
        }

        println("");
    }

    return 0;
}
