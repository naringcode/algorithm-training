#include <bits/stdc++.h>

using namespace std;

int numArr[10][10];

int maxN = 0;
int resY = 0;
int resX = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int y = 0; y < 9; y++)
    {
        for (int x = 0; x < 9; x++)
        {
            cin >> numArr[y][x];
        }
    }

    maxN = numArr[0][0];

    for (int y = 0; y < 9; y++)
    {
        for (int x = 0; x < 9; x++)
        {
            if (maxN < numArr[y][x])
            {
                maxN = numArr[y][x];

                resY = y;
                resX = x;
            }
        }
    }

    cout << maxN << '\n';

    cout << resY + 1 << ' ' << resX + 1;

    return 0;
}
