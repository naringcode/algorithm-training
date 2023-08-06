#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int w;
int v;

int dp[100'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> w >> v;

        for (int wei = k; wei >= w; wei--)
        {
            dp[wei] = max(dp[wei], dp[wei - w] + v);
        }
    }

    cout << dp[k];

    return 0;
}