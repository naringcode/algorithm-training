#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;

int main()
{
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
    {
        println("*");
    }
    else if (a == 1 && b == 1 && c == 1)
    {
        println("*");
    }
    else
    {
        if (a == b && a != c)
        {
            println("C");
        }
        else if (a == c && a != b)
        {
            println("B");
        }
        else if (b == c && a != b)
        {
            println("A");
        }
    }
    
    return 0;
}
