#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int arr[2004];
int dp[2004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    fill(dp, dp + n, 1);

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    for (int i : views::iota(0, n))
    {
        for (int j : views::iota(0, i))
        {
            if (arr[j] > arr[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        
        res = max(res, dp[i]);
    }

    println("{}", n - res);

    return 0;
}
