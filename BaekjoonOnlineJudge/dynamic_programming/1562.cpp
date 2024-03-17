#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int delta[2] = { -1, 1 };

int n;

ll dp[104][1 << 10][10];

ll res;

ll go(int depth, int bits, int now)
{
    if (depth == n)
    {
        if (bits == (1 << 10) - 1)
            return 1;

        return 0;
    }

    ll& memo = dp[depth][bits][now];

    if (-1 != memo)
        return memo;

    memo = 0;

    for (int idx = 0; idx < 2; idx++)
    {
        int next = now + delta[idx];

        if (next < 0 || next >= 10)
            continue;

        memo += go(depth + 1, bits | (1 << next), next);

        memo %= 10'000'000'000;
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n;

    for (int i = 1; i < 10; i++) // 0으로 시작하는 수는 계단수가 아니다.
    {
        res += go(1, 1 << i, i);

        res %= 1'000'000'000;
    }

    cout << res;

    return 0;
}