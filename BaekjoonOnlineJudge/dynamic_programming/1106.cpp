#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int c;
int n;

vector<pair<int, int>> vec;

int dp[2004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> c >> n;

    for (int i : views::iota(0, n))
    {
        int a;
        int b;
        cin >> a >> b;

        vec.push_back({ a, b });
    }

    ranges::fill(dp, 999'999'999);
    dp[0] = 0;

    for (const auto [cost, custom] : vec)
    {
        for (int idx = custom; idx < c + 100; idx++)
        {
            dp[idx] = min(dp[idx], dp[idx - custom] + cost);
        }
    }

    res = *min_element(dp + c, dp + c + 100);

    println("{}", res);

    return 0;
}
