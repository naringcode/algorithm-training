#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int x;
    int y;

    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        println("Not a moose");
    }
    else if (x == y)
    {
        println("Even {}", x + y);
    }
    else if (x > y)
    {
        println("Odd {}", x + x);
    }
    else // if (x < y)
    {
        println("Odd {}", y + y);
    }
    
    return 0;
}
