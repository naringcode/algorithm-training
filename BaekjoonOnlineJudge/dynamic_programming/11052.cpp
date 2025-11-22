#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[1004];

int dp[1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(1, n + 1))
    {
        cin >> arr[idx];
    }

    for (int i : views::iota(1, n + 1))
    {
        for (int j : views::iota(1, i + 1))
        {
            dp[i] = max(dp[i], dp[i - j] + arr[j]);
        }
    }

    println("{}", dp[n]);

    return 0;
}
