#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll INF = 999'999'999'999;

int v;
int e;

ll dist[404][404];
ll res = INF;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> v >> e;
    
    for (auto [y, x] : views::cartesian_product(views::iota(0, v), views::iota(0, v)))
    {
        //if (y == x)
        {
            //dist[y][x] = 0;
        }
        //else
        {
            dist[y][x] = INF;
        }
    }

    for (int i : views::iota(0, e))
    {
        int a;
        int b;
        ll c;

        cin >> a >> b >> c;
        a--;
        b--;

        dist[a][b] = c;
    }

    for (int k : views::iota(0, v))
    {
        for (int i : views::iota(0, v))
        {
            for (int j : views::iota(0, v))
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i : views::iota(0, v))
    {
        res = min(res, dist[i][i]);
    }

    if (res == INF)
    {
        println("-1");
    }
    else
    {
        println("{}", res);
    }

    return 0;
}
