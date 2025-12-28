#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int costs[]{ 1, 2, 5, 7 };
int dp[100'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ranges::fill(dp, 999'999'999);
    dp[0] = 0;

    cin >> n;

    for (int idx : views::iota(1, n + 1))
    {
        for (int cost : costs)
        {
            if (idx >= cost)
            {
                dp[idx] = min(dp[idx], dp[idx - cost] + 1);
            }
        }
    }

    println("{}", dp[n]);

    return 0;
}
