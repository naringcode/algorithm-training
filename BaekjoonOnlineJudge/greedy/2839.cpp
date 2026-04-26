#include <bits/stdc++.h>

using namespace std;

int n;
int res = 99999; // inf

int main()
{
    cin >> n;

    bool isFound = false;

    for (int x = 0; x <= n / 5; x++)
    {
        for (int y = 0; y <= (n - 5 * x) / 3; y++)
        {
            if (0 == n - (x * 5 + y * 3))
            {
                isFound = true;

                res = std::min(res, x + y);
            }
        }
    }

    if (false == isFound)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    return 0;
}