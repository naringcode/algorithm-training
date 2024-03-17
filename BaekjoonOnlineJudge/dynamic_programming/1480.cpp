#include <bits/stdc++.h>

using namespace std;

int n; // 보석
int m; // 가방
int c; // 용량

int arr[24];

// 가방, 남은 용량, 넣은 보석
int dp[14][24][1 << 14];

int go(int idx, int capa, int bits)
{
    if (idx == m)
        return 0;

    int& memo = dp[idx][capa][bits];

    if (-1 != memo)
        return memo;

    memo = 0; // 아래 조건을 아예 탐색하지 않는 경우도 존재한다.

    for (int i = 0; i < n; i++)
    {
        if (bits & (1 << i))
            continue;
 
        if (capa + arr[i] <= c)
        {
            memo = max(memo, go(idx, capa + arr[i], bits | (1 << i)) + 1);
        }
        else
        {
            memo = max(memo, go(idx + 1, 0, bits));
        }
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n >> m >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << go(0, 0, 0);

    return 0;
}
