#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -2, -1, 1, 2, 2, 1, -1, -2 };
const int dx[]{ 1, 2, 2, 1, -1, -2, -2, -1 };

int t;

int l;

int hereX;
int hereY;

int destX;
int destY;

bool visited[304][304];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> l;
        cin >> hereX >> hereY;
        cin >> destX >> destY;

        memset(visited, 0x00, sizeof(visited));

        // y, x, cost
        queue<tuple<int, int, int>> q;
        q.push({ hereY, hereX, 0 });
        visited[hereY][hereX] = true;

        while (q.size() > 0)
        {
            auto [y, x, cost] = q.front();
            q.pop();

            if (y == destY && x == destX)
            {
                println("{}", cost);

                break;
            }

            for (int dir : views::iota(0, ssize(dy)))
            {
                int ny = y + dy[dir];
                int nx = x + dx[dir];

                if (ny < 0 || nx < 0 || ny >= l || nx >= l)
                    continue;

                if (visited[ny][nx] == true)
                    continue;

                visited[ny][nx] = true;

                q.push({ ny, nx, cost + 1 });
            }
        }
    }

    return 0;
}
