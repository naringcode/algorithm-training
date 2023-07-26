#include <bits/stdc++.h>

using namespace std;

struct Pos
{
    int x;
    int y;
};

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;
int m;

char arr[14][14];

Pos initRedPos;
Pos initBluePos;
Pos goalPos;

int res = 999;

// 게임의 목표 : 빨간 구슬을 구멍을 통해 빼내는 것
// 
// 파란 구슬이 구멍에 들어가면 안 된다.
//
// 빨간 구슬과 파란 구슬이 둘 다 들어가면 안 된다(빨간 구슬만 구멍 통과).
//
// 10번 이하로만 움직여야 한다.
void go()
{
    queue<pair<Pos, Pos>> q;

    q.push({ initRedPos, initBluePos });

    for (int i = 1; i <= 10; i++)
    {
        int size = q.size();

        for (int j = 0; j < size; j++)
        {
            Pos redPos;
            Pos bluePos;

            tie(redPos, bluePos) = q.front();

            q.pop();

            for (int dir = 0; dir < 4; dir++)
            {
                // 벽이나 골을 만날 때까지 쭉 이어서 탐색해야 함
                Pos nextRedPos  = redPos;
                Pos nextBluePos = bluePos;

                int redMoveCnt  = 0;
                int blueMoveCnt = 0;

                while ('#' != arr[nextRedPos.y + dy[dir]][nextRedPos.x + dx[dir]])
                {
                    redMoveCnt++;

                    nextRedPos.y += dy[dir];
                    nextRedPos.x += dx[dir];

                    if ('O' == arr[nextRedPos.y][nextRedPos.x])
                        break;
                }

                while ('#' != arr[nextBluePos.y + dy[dir]][nextBluePos.x + dx[dir]])
                {
                    blueMoveCnt++;

                    nextBluePos.y += dy[dir];
                    nextBluePos.x += dx[dir];

                    if ('O' == arr[nextBluePos.y][nextBluePos.x])
                        break;
                }

                // 안 움직인 경우
                if (nextRedPos.y == redPos.y && nextRedPos.x == redPos.x &&
                    nextBluePos.y == bluePos.y && nextBluePos.x == bluePos.x)
                    continue;

                // 골 도달 여부
                if ('O' == arr[nextBluePos.y][nextBluePos.x]) // 파란 구슬이 도달했다면 그냥 안 되는 경우
                {
                    continue;
                }
                else if ('O' == arr[nextRedPos.y][nextRedPos.x]) // 빨간 구슬만 도착한 경우
                {
                    res = i;

                    return;
                }

                // 같은 지점에 도달했으면 가장 멀리 이동한 구슬을 한 칸 뒤로
                if (nextRedPos.y == nextBluePos.y && nextRedPos.x == nextBluePos.x)
                {
                    if (redMoveCnt < blueMoveCnt)
                    {
                        nextBluePos.y += dy[(dir + 2) % 4];
                        nextBluePos.x += dx[(dir + 2) % 4];
                    }
                    else
                    {
                        nextRedPos.y += dy[(dir + 2) % 4];
                        nextRedPos.x += dx[(dir + 2) % 4];
                    }
                }

                q.push({ nextRedPos, nextBluePos });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];

            if ('R' == arr[y][x])
            {
                initRedPos.y = y;
                initRedPos.x = x;
            }
            else if ('B' == arr[y][x])
            {
                initBluePos.y = y;
                initBluePos.x = x;
            }
            else if ('O' == arr[y][x])
            {
                goalPos.y = y;
                goalPos.x = x;
            }
        }
    }

    go();

    if (999 == res)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    return 0;
}