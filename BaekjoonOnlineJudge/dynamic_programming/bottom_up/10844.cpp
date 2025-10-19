#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll dp[104][10];

int n;
ll  res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(1, 10))
    {
        // 한 자리
        dp[1][idx] = 1;
    }

    for (int i : views::iota(2, n + 1))
    {
        for (int j : views::iota(0, 10))
        {
            if (j > 0)
            {
                dp[i][j] += dp[i - 1][j - 1];
            }
            
            if (j < 9)
            {
                dp[i][j] += dp[i - 1][j + 1];
            }

            dp[i][j] %= 1'000'000'000;
        }
    }

    for (int idx : views::iota(0, 10))
    {
        res += dp[n][idx];
        res %= 1'000'000'000;
    }

    println("{}", res);
    
    return 0;
}
