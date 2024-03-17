#include <iostream>

using namespace std;

int n, k;

int main()
{
    cin >> n >> k;

    int i;
    for (i = 1; i <= n; i++)
    {
        if (0 == n % i)
        {
            k--;

            if (0 == k)
                break;
        }
    }

    if (0 == k)
    {
        cout << i;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
