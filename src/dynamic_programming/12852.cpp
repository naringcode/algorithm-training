#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll dp[1'000'004];
ll trace[1'000'004];

ll go(ll num)
{
    if (1 == num)
        return 0;

    ll& memo = dp[num];

    if (-1 != memo)
        return memo;

    ll ret;

    memo = 999'999'999;

    if (0 == num % 3)
    {
        ret = go(num / 3);

        if (memo > ret)
        {
            memo = ret;

            trace[num] = num / 3;
        }
    }

    if (0 == num % 2)
    {
        ret = go(num / 2);

        if (memo > ret)
        {
            memo = ret;

            trace[num] = num / 2;
        }
    }

    ret = go(num - 1);
    
    if (memo > ret)
    {
        memo = ret;

        trace[num] = num - 1;
    }

    memo++;

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n;

    cout << go(n) << '\n';

    cout << n << ' ';

    while (trace[n])
    {
        cout << trace[n] << ' ';

        n = trace[n];
    }

    return 0;
}
