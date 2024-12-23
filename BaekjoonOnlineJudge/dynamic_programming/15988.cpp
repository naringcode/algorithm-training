#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

ll n;
ll dp[1'000'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 1'000'000; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1'000'000'009;
    }

    while (t--)
    {
        cin >> n;
        
        cout << dp[n] << '\n';
    }

    return 0;
}
