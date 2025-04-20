#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll dp[74];

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i : views::iota(4, 70))
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }

    cin >> n;

    while (n--)
    {
        int temp;
        cin >> temp;

        println("{}", dp[temp]);
    }

    return 0;
}
