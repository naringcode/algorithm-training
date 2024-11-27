#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int arr[1004][1004];
int memo[1004][1004];

bool check(int y, int x)
{
    if (y >= 0 && y < n && x >= 0 && x < m)
        return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(&memo[0][0], &memo[0][0] + sizeof(memo) / sizeof(int), -1);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];
        }
    }

    memo[0][0] = arr[0][0];

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (check(y - 1, x))
            {
                int temp = arr[y][x] + memo[y - 1][x];

                memo[y][x] = max(memo[y][x], temp);
            }
            
            if (check(y, x - 1))
            {
                int temp = arr[y][x] + memo[y][x - 1];

                memo[y][x] = max(memo[y][x], temp);
            }

            if (check(y - 1, x - 1))
            {
                int temp = arr[y][x] + memo[y - 1][x - 1];

                memo[y][x] = max(memo[y][x], temp);
            }
        }
    }

    cout << memo[n - 1][m - 1];

    return 0;
}