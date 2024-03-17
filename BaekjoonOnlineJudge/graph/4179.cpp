#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int h;
int w;

char arr[1004][1004];
int  visited[1004][1004];

vector<pair<int, int>> jihunVec;
vector<pair<int, int>> fireVec;

bool flag;
int  res;

void go()
{
    vector<pair<int, int>> jihunWorkVec;
    vector<pair<int, int>> fireWorkVec;

    int x;
    int y;

    while (jihunVec.size())
    {
        fireWorkVec = fireVec;

        fireVec.clear();

        for (auto& pair : fireWorkVec)
        {   
            tie(y, x) = pair;

            for (int i = 0; i < 4; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                    continue;

                if ('F' == arr[ny][nx] || '#' == arr[ny][nx])
                    continue;
                
                arr[ny][nx] = 'F';

                fireVec.push_back({ ny, nx });
            }
        }

        jihunWorkVec = jihunVec;

        jihunVec.clear();

        for (auto& pair : jihunWorkVec)
        {
            tie(y, x) = pair;

            for (int i = 0; i < 4; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                {
                    flag = true;

                    res = visited[y][x];

                    return;
                }

                if ('F' == arr[ny][nx] || '#' == arr[ny][nx])
                    continue;

                if (visited[ny][nx])
                    continue;

                visited[ny][nx] = visited[y][x] + 1;

                jihunVec.push_back({ ny, nx });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> w;

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            cin >> arr[y][x];

            if ('J' == arr[y][x])
            {
                jihunVec.push_back({ y, x });

                visited[y][x] = 1;
            }
            else if ('F' == arr[y][x])
            {
                fireVec.push_back({ y, x });
                
                visited[y][x] = 1;
            }
        }
    }

    go();

    if (false == flag)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << res;
    }

    return 0;
}
