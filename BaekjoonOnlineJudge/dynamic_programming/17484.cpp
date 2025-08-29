#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[3]{ -1, -1, -1 };
const int dx[3]{ -1, 0, 1 };

int n;
int m;

int arr[10][10];
int dp[3][10][10];

int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> arr[y][x];

        dp[0][y][x] = 999'999'999;
        dp[1][y][x] = 999'999'999;
        dp[2][y][x] = 999'999'999;
    }
    
    for (int i : views::iota(0, m))
    {
        dp[0][0][i] = arr[0][i];
        dp[1][0][i] = arr[0][i];
        dp[2][0][i] = arr[0][i];
    }

    for (auto [y, x] : views::cartesian_product(views::iota(1, n), views::iota(0, m)))
    {
        for (int nextDir : views::iota(0, 3))
        {
            int prevX = x + dx[nextDir];

            if (prevX < 0 || prevX >= m)
                continue;

            for (int prevDir : views::iota(0, 3))
            {
                if (nextDir == prevDir)
                    continue;

                dp[nextDir][y][x] = min(dp[nextDir][y][x], dp[prevDir][y - 1][prevX] + arr[y][x]);
            }
        }
    }

    for (int i : views::iota(0, m))
    {
        res = min(res, dp[0][n - 1][i]);
        res = min(res, dp[1][n - 1][i]);
        res = min(res, dp[2][n - 1][i]);
    }

    println("{}", res);

    return 0;
}
