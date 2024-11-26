#include <bits/stdc++.h>

using namespace std;

int n;
int arr[2200][2200];

int res[3];

void go(int y, int x, int n)
{
    for (int y2 = y; y2 < y + n; y2++)
    {
        for (int x2 = x; x2 < x + n; x2++)
        {
            if (arr[y][x] != arr[y2][x2])
            {
                n /= 3;

                go(y, x, n);
                go(y, x + n, n);
                go(y, x + n + n, n);
                go(y + n, x, n);
                go(y + n, x + n, n);
                go(y + n, x + n + n, n);
                go(y + n + n, x, n);
                go(y + n + n, x + n, n);
                go(y + n + n, x + n + n, n);

                return;
            }
        }
    }

    res[arr[y][x] + 1]++;
}

int main()
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

    go(0, 0, n);

    cout << res[0] << '\n';
    cout << res[1] << '\n';
    cout << res[2] << '\n';

    return 0;
}