#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

char arr[104][104];

int resX;
int resY;

int go(int y, int x, int dy, int dx, int len)
{
    if (y >= n || x >= n)
        return len;

    if ('X' == arr[y][x])
        return len;

    return go(y + dy, x + dx, dy, dx, len + 1);
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

    for (int y = 0; y < n; y++)
    {
        int x = 0;

        while (x < n)
        {
            int len = go(y, x, 0, 1, 0);

            if (len >= 2)
            {
                resX++;
            }

            x += len + 1;
        }
    }
    
    for (int x = 0; x < n; x++)
    {
        int y = 0;

        while (y < n)
        {
            int len = go(y, x, 1, 0, 0);

            if (len >= 2)
            {
                resY++;
            }

            y += len + 1;
        }
    }

    cout << resX << ' ' << resY;

    return 0;
}
