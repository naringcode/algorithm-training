#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

bool arr[10][10];
bool light[10][10];

int res = 999'999'999;

void go(int bits)
{
    int cnt = 0;
    
    // 첫 번째 행에 대한 상태 결정
    for (int i = 0; i < 10; i++)
    {
        if (bits & (1 << i))
        {
            for (int dir = 0; dir < 4; dir++)
            {
                int ny = 0 + dy[dir];
                int nx = i + dx[dir];

                if (ny < 0 || nx < 0 || ny >= 10 || nx >= 10)
                    continue;

                light[ny][nx] = !light[ny][nx];
            }

            light[0][i] = !light[0][i];

            cnt++;
        }
    }

    // 위에 켜진 불이 있으면 끄기
    for (int y = 1; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (false == light[y - 1][x])
                continue;

            for (int dir = 0; dir < 4; dir++)
            {
                int ny = y + dy[dir];
                int nx = x + dx[dir];

                if (ny < 0 || nx < 0 || ny >= 10 || nx >= 10)
                    continue;

                light[ny][nx] = !light[ny][nx];
            }

            light[y][x] = !light[y][x];

            cnt++;
        }
    }

    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (light[y][x]) // 켜진 불이 존재한다
                return;
        }
    }

    res = min(res, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            char ch;

            cin >> ch;

            if ('O' == ch)
            {
                arr[y][x] = true;
            }
        }
    }

    for (int i = 0; i < (1 << 10); i++)
    {
        memcpy(light, arr, sizeof(light));

        go(i);
    }

    if (999'999'999 == res)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    return 0;
}