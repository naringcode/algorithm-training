#include <bits/stdc++.h>

using namespace std;

using ll = long long;

char board[404][404];

int n;

int w;
int h;

int currX;
int currY;

int l;
int t;
int r;
int b;

void GoL()
{
    t += 2;

    while (currX >= l)
    {
        board[currY][currX] = '*';

        currX--;
    }

    currX++;
}

void GoB()
{
    l += 2;

    while (currY <= b)
    {
        board[currY][currX] = '*';

        currY++;
    }

    currY--;
}

void GoR()
{
    b -= 2;
    
    while (currX <= r)
    {
        board[currY][currX] = '*';

        currX++;
    }

    currX--;
}

void GoT()
{
    r -= 2;
    
    while (currY >= t)
    {
        board[currY][currX] = '*';

        currY--;
    }

    currY++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n == 1)
    {
        println("*");

        return 0;
    }

    w = ((n - 1) * 2) * 2 + 1;
    h = w + 2;

    for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
    {
        board[y][x] = ' ';
    }
    
    r = w - 1;
    b = h - 1;

    currX = r;

    while (true)
    {
        GoL();
        GoB();

        if (r <= t)
            break;

        GoR();
        GoT();
    }

    for (auto y : views::iota(0, h))
    {
        if (y == 1)
        {
            println("*");

            continue;
        }

        for (auto x : views::iota(0, w))
        {
            print("{}", board[y][x]);
        }

        println("");
    }

    return 0;
}
