#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int dp[10'004];

void init()
{
    dp[0] = 1;

    for (int n = 1; n <= 3; n++)
    {
        for (int i = 1; i <= 10000; i++)
        {
            if (i - n >= 0)
            {
                dp[i] += dp[i - n];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    init();

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        cout << dp[n] << '\n';
    }

    return 0;
}