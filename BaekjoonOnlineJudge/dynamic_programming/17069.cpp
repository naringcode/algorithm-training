#include <bits/stdc++.h>

using namespace std;

using ll = long long;

enum Direction
{
    kHori,
    kVert,
    kDiag,
};

int n;

int arr[36][36];
ll dp[3][36][36];

// 꼬리는 고려하지 않고 머리만 고려해서 갈 수 있나?

ll go(int y, int x, int type)
{
    // 기저
    if (y >= n || x >= n)
        return 0;

    if (1 == arr[y][x])
        return 0;

    if (kDiag == type)
    {
        if (1 == arr[y - 1][x] || 1 == arr[y][x - 1])
            return 0;
    }

    if (n - 1 == y && n - 1 == x)
        return 1;

    // 메모
    ll& memo = dp[type][y][x];

    if (-1 != memo)
        return memo;

    // 로직
    memo = 0;

    if (kHori == type) // 가로
    {
        memo += go(y, x + 1, kHori);
        memo += go(y + 1, x + 1, kDiag);
    }
    else if (kVert == type) // 세로
    {
        memo += go(y + 1, x, kVert);
        memo += go(y + 1, x + 1, kDiag);
    }
    else if (kDiag == type) // 대각
    {
        memo += go(y, x + 1, kHori);
        memo += go(y + 1, x, kVert);
        memo += go(y + 1, x + 1, kDiag);
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

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    go(0, 1, 0);

    cout << dp[0][0][1];

    return 0;
}