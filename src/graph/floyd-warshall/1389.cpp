#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;
int m;

int a;
int b;

int arr[104][104];

int test = INF;
int res  = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    fill(&arr[0][0], &arr[0][0] + 104 * 104, INF);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;

        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                continue;

            sum += arr[i][j];
        }

        if (sum < test)
        {
            test = sum;
            res  = i;
        }
    }

    cout << res;

    return 0;
}
