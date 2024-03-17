#include <bits/stdc++.h>

using namespace std;

int n;
int m;

char arr[5][5];
bool visited[5][5];

bool chk[5][5];

int res;

// 벽을 나누고 탐색해야 하는데

int calc(int y, int x, int dy, int dx, int sum)
{
    if (y + dy == n || x + dx == m)
        return sum;
    
    if (visited[y + dy][x + dx])
        return sum;

    if (chk[y][x] != chk[y + dy][x + dx])
        return sum;

    visited[y + dy][x + dx] = true;

    sum *= 10;

    return calc(y + dy, x + dx, dy, dx, sum + arr[y + dy][x + dx] - '0');
}

void go(int y, int x)
{
    if (x == m)
    {
        x = 0;
        y++;
    }

    // 경우의 수 조합 완료
    if (y == n)
    {
        memset(visited, 0, sizeof(visited));

        int temp = 0;

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (visited[y][x])
                    continue;

                visited[y][x] = true;

                if (false == chk[y][x]) // 가로
                {
                    temp += calc(y, x, 0, 1, arr[y][x] - '0');
                }
                else // if (true == chk[y][x]) // 세로
                {
                    temp += calc(y, x, 1, 0, arr[y][x] - '0');
                }
            }
        }

        res = max(res, temp);

        return;
    }

    chk[y][x] = false; // 가로

    go(y, x + 1);

    chk[y][x] = true; // 세로

    go(y, x + 1);
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
        }
    }

    go(0, 0);

    cout << res;

    return 0;
}