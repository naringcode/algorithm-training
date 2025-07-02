#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int arr[1004];
int dp[1004];

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    // self
    ranges::fill(dp, 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[i] < arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);

                res = max(res, dp[i]);
            }
        }
    }

    println("{}", res);

    return 0;
}
