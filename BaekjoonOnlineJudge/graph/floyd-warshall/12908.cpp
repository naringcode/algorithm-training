#include <bits/stdc++.h>

using namespace std;

using ll = long long;

pair<ll, ll> points[8];
ll dist[8][8];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> points[0].first >> points[0].second; // xs, ys
    cin >> points[1].first >> points[1].second; // xe, ye

    // teleports
    for (int i : views::iota(0, 3))
    {
        pair<ll, ll>& p1 = points[2 + i * 2];
        pair<ll, ll>& p2 = points[2 + i * 2 + 1];

        cin >> p1.first >> p1.second;
        cin >> p2.first >> p2.second;
    }

    for (int i : views::iota(0, 8))
    {
        for (int j : views::iota(0, 8))
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = abs(points[i].first - points[j].first) + abs(points[i].second - points[j].second);
            }
        }
    }

    for (int i : views::iota(2, 8) | views::stride(2))
    {
        dist[i][i + 1] = min(dist[i][i + 1], 10LL); // 10s
        dist[i + 1][i] = dist[i][i + 1];
    }

    for (int k : views::iota(0, 8))
    {
        for (int i : views::iota(0, 8))
        {
            for (int j : views::iota(0, 8))
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    println("{}", dist[0][1]); // s -> e

    return 0;
}
