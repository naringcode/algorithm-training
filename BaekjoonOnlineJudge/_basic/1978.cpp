#include <iostream>

using namespace std;

int n;
int a;

bool dp[1004];

int res;

int main()
{
    for (int i = 2; i < 1004; i++)
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

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (true == dp[a])
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
