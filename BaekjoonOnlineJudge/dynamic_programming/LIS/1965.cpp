#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int arr[1004];
int dp[1004];

int res;

int go(int idx)
{
    if (n == idx)
        return 0;

    int& memo = dp[idx];
    if (memo != -1)
        return memo;

    memo = 1;

    for (int nxt = idx + 1; nxt < n; nxt++)
    {
        if (arr[idx] < arr[nxt])
        {
            memo = max(memo, 1 + go(nxt));
        }
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof(dp));

    for (int i : views::iota(0, n))
    {
        res = max(res, go(i));
    }

    println("{}", res);
    
    return 0;
}
