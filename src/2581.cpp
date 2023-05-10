#include <iostream>

using namespace std;

int m;
int n;

bool dp[10004];

int res1;
int res2;

int main()
{
    for (int i = 2; i < 10004; i++)
    {
        dp[i] = true;

        for (int j = 2; j <= i / 2; j++)
        {
            if (0 == i % j)
            {
                dp[i] = false;

                break;
            }
        }
    }

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (true == dp[i])
        {
            if (0 == res2)
            {
                res2 = i;
            }

            res1 += i;
        }
    }

    if (0 == res2)
    {
        cout << -1;
    }
    else
    {
        cout << res1 << '\n' << res2;
    }

    return 0;
}
