#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

ll dp[1004][1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    dp[0][0] = 1;

    for (auto [y, x] : views::cartesian_product(views::iota(1, n + 1), views::iota(1, m + 1)))
    {
        dp[y][x] = dp[y - 1][x] + dp[y][x - 1] + dp[y - 1][x - 1];
        dp[y][x] %= 1'000'000'007;
    }

    println("{}", dp[n][m]);

    return 0;
}
