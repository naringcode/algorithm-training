#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 1504;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

char arr[MAX][MAX];
int  visitedWater[MAX][MAX];
int  visitedA[MAX][MAX];
int  visitedB[MAX][MAX];

int r;
int c;

vector<pair<int, int>> startVec;
vector<pair<int, int>> waterVec;

int cnt = 1;

void bfs()
{
    queue<pair<int, int>> qWater;
    queue<pair<int, int>> qA;
    queue<pair<int, int>> qB;

    visitedA[startVec[0].first][startVec[0].second] = 1;
    visitedB[startVec[1].first][startVec[1].second] = 1;

    qA.push(startVec[0]);
    qB.push(startVec[1]);

    for (auto& pair : waterVec)
    {
        visitedWater[pair.first][pair.second] = 1;

        qWater.push(pair);
    }

    while (qWater.size())
    {
        queue<pair<int, int>> qWaterTemp;
        queue<pair<int, int>> qATemp;
        queue<pair<int, int>> qBTemp;
        
        cnt++;

        // 녹이기 전에 탐색해서 미래를 예측(?)한다.
        // 녹일 예정인데 만나지 못 한다면 녹인 후 재탐색(반례 보고 찾음)

        // 탐색 A
        while (qA.size())
        {
            auto here = qA.front();
            qA.pop();

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = here.first  + dy[idx];
                int nx = here.second + dx[idx];

                if (ny < 0 || nx < 0 || ny >= r || nx >= c)
                    continue;

                if (visitedA[ny][nx])
                    continue;

                visitedA[ny][nx] = cnt;

                if (visitedA[ny][nx] + visitedB[ny][nx] > cnt)
                {
                    cnt--; // 만날 수 있는 상태에서 탐색한 경우

                    return;
                }

                if ('X' == arr[ny][nx])
                {
                    qATemp.push({ ny, nx });
                }
                else
                {
                    qA.push({ ny, nx });
                }
            }
        }

        // 탐색 B
        while (qB.size())
        {
            auto here = qB.front();
            qB.pop();

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = here.first  + dy[idx];
                int nx = here.second + dx[idx];

                if (ny < 0 || nx < 0 || ny >= r || nx >= c)
                    continue;

                if (visitedB[ny][nx])
                    continue;

                visitedB[ny][nx] = cnt;

                if (visitedA[ny][nx] + visitedB[ny][nx] > cnt)
                {
                    // 겹치는 위치면 찾은 것이다.

                    return;
                }

                if ('X' == arr[ny][nx])
                {
                    qBTemp.push({ ny, nx });
                }
                else
                {
                    qB.push({ ny, nx });
                }
            }
        }

        // 녹이자
        while (qWater.size())
        {
            auto here = qWater.front();
            qWater.pop();

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = here.first  + dy[idx];
                int nx = here.second + dx[idx];

                if (ny < 0 || nx < 0 || ny >= r || nx >= c)
                    continue;

                if (visitedWater[ny][nx])
                    continue;

                visitedWater[ny][nx] = cnt;

                if ('X' == arr[ny][nx])
                {
                    arr[ny][nx] = '.';

                    qWaterTemp.push({ ny, nx });
                }
            }
        }

        qWater = qWaterTemp;
        qA = qATemp;
        qB = qBTemp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c;

    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            cin >> arr[y][x];

            if ('L' == arr[y][x])
            {
                startVec.push_back({ y, x });
            }
            
            if ('X' != arr[y][x]) // 백조도 포함해야 함
            {
                waterVec.push_back({ y, x });
            }
        }
    }

    bfs();

    cout << cnt - 1;

    return 0;
}
