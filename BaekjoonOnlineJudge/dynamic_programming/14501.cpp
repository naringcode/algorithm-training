#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arrT[20];
int arrP[1004];

int dp[1004];

int res = 0;

int go(int idx)
{
    // 기저
    if (idx + arrT[idx] > n)
        return 0;

    if (idx + arrT[idx] == n)
    {
        res = max(res, arrP[idx]);

        return arrP[idx];
    }

    // 메모
    int& memo = dp[idx];

    if (memo != -1)
        return memo;

    // 로직
    int mx = 0;

    for (int i = 0; i < 5; i++)
    {
        mx = max(mx, go(idx + i + arrT[idx]) + arrP[idx]);
    }

    memo = mx;
    res  = max(res, memo);
    
    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(dp, dp + 1004, -1);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arrT[i] >> arrP[i];
    }

    for (int i = 0; i < 5; i++)
    {
        go(i);
    }

    cout << res;

    return 0;
}
