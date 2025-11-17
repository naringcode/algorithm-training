#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int arr[1004];
int dp[1004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];
    }

    for (int i : views::iota(0, n))
    {
        dp[i] = arr[i];

        for (int j : views::iota(0, i))
        {
            if (arr[j] < arr[i])
            {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }

    for (int i : views::iota(0, n))
    {
        res = max(res, dp[i]);
    }

    println("{}", res);

    return 0;
}
