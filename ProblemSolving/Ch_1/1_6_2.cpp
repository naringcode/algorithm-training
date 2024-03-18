#include <bits/stdc++.h>

using namespace std;

int memo[204][204];

int n;
int m;

// int go(int val, int r)
int go(int n, int m)
{
    // if (val < 0)
    //     return 0;
    
    // if (0 == val)
    //     return 1;

    // if (0 != memo[val][r])
    //     return memo[val][r];

    // int& res = memo[val][r];

    // for (int i = r; i <= m; i++)
    // {
    //     res += go(val - i, i);
    // }

    // return res;

    if (n < m)
    {
        m = n; 
    }

    if (memo[n][m] > 0)
        return memo[n][m];

    if (0 == n)
        return memo[n][m] = 1;

    int res = 0;

    for (int i = 1; i <= m; i++)
    {
        // memo[n][m] += go(n - i, i);
        res += go(n - i, i);
    }

    return memo[n][m] = res;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n >> m;

    // cout << go(n, 1);
    cout << go(n, m);

    return 0;
}
