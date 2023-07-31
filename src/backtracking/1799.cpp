#include <bits/stdc++.h>

using namespace std;

int n;

int arr[14][14];

int diagRT[24];
int diagLT[24];

int cnt;

int resA;
int resB;

void go(int y, int x)
{
    if (x >= n)
    {
        // 홀수 끝 -> 짝수 끝 반복
        if (1 == (x % 2))
        {
            x = 0;
        }
        else
        {
            x = 1;
        }

        y++;
    }

    if (y == n)
    {
        if ((x + y) % 2)
        {
            resA = max(resA, cnt);
        }
        else
        {
            resB = max(resB, cnt);
        }

        return;
    }

    if (1 == arr[y][x] && 0 == diagRT[y + x] && 0 == diagLT[x - y + n])
    {
        cnt++;

        diagRT[y + x] = 1;
        diagLT[x - y + n] = 1;

        go(y, x + 2);

        diagRT[y + x] = 0;
        diagLT[x - y + n] = 0;

        cnt--;
    }

    go(y, x + 2);
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

    go(0, 0);
    go(0, 1);

    cout << resA + resB;

    return 0;
}