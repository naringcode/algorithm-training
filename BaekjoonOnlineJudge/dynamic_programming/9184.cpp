#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

int dp[104][104][104];

int go(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;

    if (a > 20 || b > 20 || c > 20)
        return go(20, 20, 20);

    int& memo = dp[a + 50][b + 50][c + 50];

    if (-1 != memo)
        return memo;

    if (a < b && b < c)
    {
        memo = go(a, b, c - 1) + go(a, b - 1, c - 1) - go(a, b - 1, c);
    }
    else
    {
        memo = go(a - 1, b, c) + go(a - 1, b - 1, c) + go(a - 1, b, c - 1) - go(a - 1, b - 1, c - 1);
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
        cin >> a >> b >> c;

        if (-1 == a && -1 == b && -1 == c)
            break;

        cout << "w(" << a << ", " << b << ", " << c << ") = " << go(a, b, c) << '\n';
    }

    return 0;
}