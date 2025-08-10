#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
ll dp[1'000'004];

ll fibo(int n)
{
    ll& memo = dp[n];
    if (memo != -1)
        return memo;

    memo = fibo(n - 1) + fibo(n - 2);
    memo %= 1'000'000'007;

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ranges::fill(dp, -1);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    cin >> n;

    println("{}", fibo(n));

    return 0;
}
