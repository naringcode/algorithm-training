#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int mvIdx = 1;

char arr[104][104];

int n;

int k;
int l;

int a;
int b;
char c;

// 프레임, 명령
queue<pair<int, char>> taskQ;

// y, x
deque<pair<int, int>> snake;

int frame;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    fill(&arr[0][0], &arr[0][0] + 104 * 104, ' ');

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;

        arr[a - 1][b - 1] = 'A';
    }

    snake.push_back({ 0, 0 });

    arr[0][0] = '*';

    cin >> l;

    for (int i = 0; i < l; i++)
    {
        cin >> a >> c;

        taskQ.push({ a, c });
    }

    frame = 1; // 최초 배치도 이동으로 본다.

    while (true)
    {
        int ny = snake.front().first  + dy[mvIdx];
        int nx = snake.front().second + dx[mvIdx];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            break;

        if ('*' == arr[ny][nx])
            break;

        if ('A' == arr[ny][nx])
        {
            snake.push_front({ ny, nx });

            arr[ny][nx] = '*';
        }
        else
        {
            arr[snake.back().first][snake.back().second] = ' ';
            arr[ny][nx] = '*';

            snake.push_front({ ny, nx });
            snake.pop_back();
        }

        // cout << "----- " << frame << "\n";

        // for (int y = 0; y < n; y++)
        // {
        //     for (int x = 0; x < n; x++)
        //     {
        //         cout << arr[y][x];
        //     }

        //     cout << '\n';
        // }

        if (taskQ.size() && frame == taskQ.front().first)
        {
            if ('L' == taskQ.front().second)
            {
                mvIdx = (mvIdx + 3) % 4;
            }
            else
            {
                mvIdx = (mvIdx + 1) % 4;
            }

            taskQ.pop();
        }

        frame++;
    }

    cout << frame;

    return 0;
}