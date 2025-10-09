#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 999'999'999;

int n;

int dist[54][54];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        char ch;
        cin >> ch;

        if (ch == 'N')
        {
            dist[y][x] = INF;
        }
        else
        {
            dist[y][x] = 1;
        }
    }

    for (int k : views::iota(0, n))
    {
        for (int i : views::iota(0, n))
        {
            for (int j : views::iota(0, n))
            {
                if (i == j)
                    continue;

                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i : views::iota(0, n))
    {
        int temp = 0;

        for (int j : views::iota(0, n))
        {
            if (dist[i][j] <= 2)
            {
                temp++;
            }
        }

        res = max(res, temp);
    }

    println("{}", res);

    return 0;
}
