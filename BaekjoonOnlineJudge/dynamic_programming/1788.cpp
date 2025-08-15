#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll dp[1'000'004];
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[0] = 0;
    dp[1] = 1;

    for (int idx : views::iota(2, 1'000'001))
    {
        dp[idx] = dp[idx - 1] + dp[idx - 2];
        dp[idx] %= 1'000'000'000;
    }

    cin >> n;

    if (n == 0)
    {
        println("0");
        println("0");
    }
    else if (n < 0 && n % 2 == 0)
    {
        println("-1");
        println("{}", dp[abs(n)]);
    }
    else
    {
        println("1");
        println("{}", dp[abs(n)]);
    }

    return 0;
}
