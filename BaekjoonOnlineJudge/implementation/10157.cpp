#include <bits/stdc++.h>
#include <span>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int c;
int r;

int step;

int sx;
int sy;
int ex;
int ey;

int arr[1004][1004];

int k;

int resX;
int resY;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> c >> r;
    cin >> k;

    sx = 0;
    sy = 0;
    ex = c;
    ey = r;

    int cnt = 1;

    while (cnt <= r * c)
    {
        if (step == 0)
        {
            for (int y = ey - 1; y >= sy; y--)
            {
                arr[y][sx] = cnt++;
            }

            sx++;
        }
        else if (step == 1)
        {
            for (int x = sx; x < ex; x++)
            {
                arr[sy][x] = cnt++;
            }

            sy++;
        }
        else if (step == 2)
        {
            for (int y = sy; y < ey; y++)
            {
                arr[y][ex - 1] = cnt++;
            }

            ex--;
        }
        else if (step == 3)
        {
            for (int x = ex - 1; x >= sx; x--)
            {
                arr[ey - 1][x] = cnt++;
            }

            ey--;
        }

        step = (step + 1) % 4;
    }

    // for (int y = 0; y < r; y++)
    // {
    //     for (int x = 0; x < c; x++)
    //     {
    //         print("[ {}, {} ] {:>2} ", x + 1, r - y, arr[y][x]);
    //     }
    // 
    //     println("");
    // }

    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            if (k == arr[y][x])
            {
                resX = x + 1;
                resY = r - y;
            }
        }
    }

    if (resX == 0 && resY == 0)
    {
        println("0");
    }
    else
    {
        println("{} {}", resX, resY);
    }

    return 0;
}
