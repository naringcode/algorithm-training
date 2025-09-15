#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int r;

int from;
int to;
int weight;

const int INF = 999'999'999;
int dist[104][104];
int itemCnt[20];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> r;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = (i == j) ? 0 : INF;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> itemCnt[i];
    }

    for (int i = 0; i < r; i++)
    {
        cin >> from >> to >> weight;

        dist[from][to] = weight;
        dist[to][from] = weight;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int temp = 0;

        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] <= m)
            {
                temp += itemCnt[j];
            }
        }

        res = max(res, temp);
    }

    println("{}", res);

    return 0;
}
