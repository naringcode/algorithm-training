#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll dp[40];

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    dp[0] = 1;

    for (int i : views::iota(1, n + 1))
    {
        for (int j : views::iota(0, i))
        {
            dp[i] += dp[j] * dp[i - 1 - j];
        }
    }

    println("{}", dp[n]);

    return 0;
}
