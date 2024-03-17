#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll dp[64][64];

// 카탈란 수

ll go(int w, int h)
{
    if (0 == w && 0 == h) // 문자열이 완성된 순간
        return 1;

    ll& memo = dp[w][h];

    if (-1 != memo)
        return memo;

    memo = 0;

    if (w > 0)
    {
        memo += go(w - 1, h + 1);
    }

    if (h > 0)
    {
        memo += go(w, h - 1);
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    while (true)
    {
        cin >> n;

        if (0 == n)
            break;

        cout << go(n - 1, 1) << '\n';
    }

    return 0;
}
