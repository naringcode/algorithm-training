#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int dy[]{ -1, -1, 0, 1, 1,  1,  0, -1 };
int dx[]{  0,  1, 1, 1, 0, -1, -1, -1 };

int n;
int m;

int arr[54][54];
int visited[54][54];

int res;

int go(int x, int y)
{
    memset(visited, -1, sizeof(visited));

    queue<pair<int, int>> q;
    q.push({ y, x });

    visited[y][x] = 0;

    while (q.size() > 0)
    {
        auto [y, x] = q.front();
        q.pop();

        if (arr[y][x] == 1)
            return visited[y][x];

        for (int dir : views::iota(0, ssize(dy)))
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;

            if (visited[ny][nx] != -1)
                continue;

            q.push({ ny, nx });
            visited[ny][nx] = visited[y][x] + 1;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> arr[y][x];
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        res = max(res, go(x, y));
    }

    println("{}", res);

    return 0;
}
