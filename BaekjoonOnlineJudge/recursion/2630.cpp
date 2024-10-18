#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int arr[128][128];

int white;
int blue;

void count(int x, int y)
{
    if (0 == arr[y][x])
    {
        white++;
    }
    else
    {
        blue++;
    }
}

void go(int sx, int sy, int ex, int ey)
{
    for (int y = sy; y < ey; y++)
    {
        for (int x = sx; x < ex; x++)
        {
            if (arr[sy][sx] != arr[y][x])
            {
                int len  = ex - sx;
                int half = len / 2;

                go(sx, sy, sx + half, sy + half);
                go(sx + half, sy, sx + len, sy + half);
                go(sx, sy + half, sx + half, sy + len);
                go(sx + half, sy + half, sx + len, sy + len);

                return;
            }
        }
    }

    count(sx, sy);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    go(0, 0, n, n);

    cout << white << '\n' << blue;

    return 0;
}
