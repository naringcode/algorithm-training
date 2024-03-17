#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;

int arr[3];
int dp[64][64][64];

int dmg[6][3] = {
    { 9, 3, 1 },
    { 9, 1, 3 },
    { 3, 9, 1 },
    { 3, 1, 9 },
    { 1, 3, 9 },
    { 1, 9, 3 }
};

int go(int a, int b, int c) //, int depth)
{
    a = max(0, a);
    b = max(0, b);
    c = max(0, c);

    if (0 == a && 0 == b && 0 == c)
        return 0;

    int& ret = dp[a][b][c];

    if (INF != ret)
        return ret;

    for (int i = 0; i < 6; i++)
    {
        ret = min(ret, go(a - dmg[i][0], b - dmg[i][1], c - dmg[i][2]) + 1);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fill(&dp[0][0][0], &dp[0][0][0] + 64 * 64 * 64, INF);

    cout << go(arr[0], arr[1], arr[2]);

    return 0;
}
