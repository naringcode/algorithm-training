#include <bits/stdc++.h>

using namespace std;

int r;
int c;

char arr[54][54];

int dy[4] = { 0, 0, 1, 1 };
int dx[4] = { 0, 1, 0, 1 };

int res[5];

void go(int x, int y)
{
    if (x == c)
    {
        y++;

        x = 0;

        if (y == r)
            return;
    }

    int cnt = 0;
    int dir;

    for (dir = 0; dir < 4; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny >= r || nx >= c)
        {
            go(x + 1, y);

            return;
        }

        if ('#' == arr[ny][nx])
        {
            go(x + 1, y);

            return;
        }

        if ('X' == arr[ny][nx])
        {
            cnt++;
        }
    }

    res[cnt]++;

    // cout << y << " : " << x << " / " << cnt << '\n';

    go(x + 1, y);
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
        }
    }

    go(0, 0);

    for (int i = 0; i < 5; i++)
    {
        cout << res[i] << '\n';
    }

    return 0;
}