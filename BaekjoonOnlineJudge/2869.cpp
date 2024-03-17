#include <iostream>

using namespace std;

int a, b, v;
int res;

int sliding;
int remaining;

int main()
{
    cin >> a >> b >> v;

    sliding = a - b;

    remaining = v - a;

    res++;

    res += remaining / sliding;

    if (0 != remaining % sliding)
    {
        res++;
    }

    cout << res;

    return 0;
}
