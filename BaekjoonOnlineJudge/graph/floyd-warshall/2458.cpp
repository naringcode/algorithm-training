#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 999'999'999;

int n;
int m;

int dist[504][504];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        if (y != x)
        {
            dist[y][x] = INF;
        }
    }

    for (int i : views::iota(0, m))
    {
        int a;
        int b;

        cin >> a >> b;
        
        a--;
        b--;

        dist[a][b] = 1;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF)
                {
                    dist[i][j] = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int b = 0;
        int s = 0;

        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] != INF)
            {
                b++;
            }
            
            if (dist[j][i] != INF)
            {
                s++;
            }
        }

        // 자기 자신 제외
        if (b + s - 2 == n - 1)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
