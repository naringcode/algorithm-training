#include <bits/stdc++.h>
#include <span>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int arr[19][19];

int winRes;
int resY;
int resX;

int checkFunc(int y, int x, int dy, int dx)
{
    if (arr[y][x] == 0)
        return 0;

    int ret = 1;

    for (int dt : views::iota(1))
    {
        int ny = (dy * dt);
        int nx = (dx * dt);
        
        if (y + ny < 0 || y + ny >= 19 ||
            x + nx < 0 || x + nx >= 19)
            break;

        if (arr[y][x] == arr[y + ny][x + nx])
        {
            ret++;

            continue;
        }

        break;
    }
    
    return ret;
}

void go()
{
    for (auto [y, x] : views::cartesian_product(views::iota(0, 19), views::iota(0, 19)))
    {
        if ((checkFunc(y, x, -1, 1) == 5 && checkFunc(y, x, 1, -1) <= 1) ||
            (checkFunc(y, x, 0, 1) == 5 && checkFunc(y, x, 0, -1) <= 1) ||
            (checkFunc(y, x, 1, 1) == 5 && checkFunc(y, x, -1, -1) <= 1) ||
            (checkFunc(y, x, 1, 0) == 5 && checkFunc(y, x, -1, 0) <= 1))
        {
            winRes = arr[y][x];
    
            resY = y + 1;
            resX = x + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (auto [y, x] : views::cartesian_product(views::iota(0, 19), views::iota(0, 19)))
    {
        cin >> arr[y][x];
    }

    go();

    println("{}", winRes);

    if (winRes != 0)
    {
        println("{} {}", resY, resX);
    }
    
    return 0;
}
