#include <bits/stdc++.h>

using namespace std;

/*     1
 *    1 5
 *   1 4 10
 *  1 3 6 10
 * 1 2 3 4  5
 * 
 * 규칙을 잘 보도록!
 */

int n;
int m;

int t;

int dp[34][34];

int combi(int n, int r)
{
    if (0 != dp[n][r])
    {
        return dp[n][r];
    }

    if (n < r)
    {
        dp[n][r] = 0;

        return 0;
    }
    else if (n == r || r == 0)
    {
        dp[n][r] = 1;

        return 1;
    }

    dp[n][r] = combi(n - 1, r) + combi(n - 1, r - 1);

    return dp[n][r];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        cout << combi(m, n) << '\n';
    }
    
    return 0;
}
