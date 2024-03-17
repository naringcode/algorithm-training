#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 304;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

char arr[MAX][MAX];
bool visited[MAX][MAX];

vector<pair<int, int>> rmv;

int n;
int m;

int sx;
int sy;
int ex;
int ey;

int  cnt;
bool chk;

void bfs()
{
    queue<pair<int, int>> q;
    queue<pair<int, int>> rmv;

    q.push({ sy, sx });

    visited[sy][sx] = true;

    do
    {
        cnt++;

        while (q.size())
        {
            auto here = q.front();

            q.pop();

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = here.first  + dy[idx];
                int nx = here.second + dx[idx];

                // cout << "y : " << ny << ", x : " << nx << '\n';

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    continue;

                if (true == visited[ny][nx])
                    continue;

                visited[ny][nx] = true;

                if ('#' == arr[ny][nx])
                {
                    chk = true;

                    return;
                }

                if ('1' == arr[ny][nx])
                {
                    rmv.push({ ny, nx });
                }
                else
                {
                    q.push({ ny, nx });
                }
            }
        }

        while (rmv.size())
        {
            auto here = rmv.front();

            rmv.pop();

            arr[here.first][here.second] = '0';

            q.push(here);
        }

        // cout << '\n';

        // for (int y = 0; y < n; y++)
        // {
        //     for (int x = 0; x < m; x++)
        //     {
        //         cout << arr[y][x];
        //     }

        //     cout << '\n';
        // }
        
    } while (q.size());

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    cin >> sy >> sx >> ey >> ex;

    sy -= 1;
    sx -= 1;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];
        }
    }

    bfs();

    cout << cnt;

    return 0;
}
