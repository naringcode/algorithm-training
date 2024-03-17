#include <bits/stdc++.h>

using namespace std;

int n;
int k;

// 시간, 모금액
pair<int, int> arrA[104];
pair<int, int> arrB[104];

int dp[104][100'004];

// map<int, int> dp[104];

// int go(int idx, int sumFirst, int sumSecond)
// {
//     if (sumFirst > k)
//         return -1;
//
//     if (idx == n)
//         return sumSecond;
//
//     if (dp[idx].end() != dp[idx].find(sumFirst))
//         return dp[idx][sumFirst];
//
//     dp[idx][sumFirst] = go(idx + 1, sumFirst + arrA[idx].first, sumSecond + arrA[idx].second);
//     dp[idx][sumFirst] = max(dp[idx][sumFirst], go(idx + 1, sumFirst + arrB[idx].first, sumSecond + arrB[idx].second));
//
//     return dp[idx][sumFirst];
// }

int go(int idx, int sumTime)
{
    if (sumTime > k)
        return -999'999'999;

    if (idx == n)
        return 0;

    int& memo = dp[idx][sumTime];

    if (-1 != memo)
        return memo;

    memo = -999'999'999; // 일단 도달할 수 없는 상태로

    memo = max(memo, go(idx + 1, sumTime + arrA[idx].first) + arrA[idx].second);
    memo = max(memo, go(idx + 1, sumTime + arrB[idx].first) + arrB[idx].second);

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i].first >> arrA[i].second;
        cin >> arrB[i].first >> arrB[i].second;
    }

    go(0, 0);

    cout << dp[0][0];

    return 0;
}
