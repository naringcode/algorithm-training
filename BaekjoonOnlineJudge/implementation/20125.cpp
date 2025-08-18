#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
char arr[1004][1004];

int resY;
int resX;

int leftA;
int rightA;

int h;

int leftL;
int rightL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        cin >> arr[y + 1][x + 1];
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        if (arr[y][x] == '*')
        {
            resY = y + 1;
            resX = x;

            break;
        }
    }

    int tempY = resY;
    int tempX = resX - 1;

    while (arr[tempY][tempX] == '*')
    {
        tempX--;
        leftA++;
    }
    
    tempY = resY;
    tempX = resX + 1;

    while (arr[tempY][tempX] == '*')
    {
        tempX++;
        rightA++;
    }
    
    tempY = resY + 1;
    tempX = resX;
    
    while (arr[tempY][tempX] == '*')
    {
        tempY++;
        h++;
    }

    tempX = resX - 1;

    for (int y : views::iota(tempY))
    {
        if (arr[y][tempX] != '*')
            break;

        leftL++;
    }
    
    tempX = resX + 1;

    for (int y : views::iota(tempY))
    {
        if (arr[y][tempX] != '*')
            break;

        rightL++;
    }

    println("{} {}", resY, resX);
    println("{} {} {} {} {}", leftA, rightA, h, leftL, rightL);

    return 0;
}
