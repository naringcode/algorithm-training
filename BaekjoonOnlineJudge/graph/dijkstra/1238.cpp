#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr int INF = 999'999'999;

int n;
int m;
int x;

vector<pair<int, int>> adjs[1004];

int destToStartCosts[1004];
int startToDestCosts[1004];

int res;

void dijkstra(span<int> minCosts, int start)
{
    ranges::fill(minCosts, INF);

    // cost, node
    priority_queue<pair<int, int>> pq;
    minCosts[start] = 0;

    pq.push({ 0, start });

    while (pq.size())
    {
        auto [dist, here] = pq.top();
        pq.pop();

        dist = -dist;

        if (minCosts[here] != dist)
            continue;

        for (auto [there, weight] : adjs[here])
        {
            if (minCosts[here] + weight < minCosts[there])
            {
                minCosts[there] = minCosts[here] + weight;

                pq.push({ -minCosts[there], there });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> x;

    for (int i : views::iota(0, m))
    {
        int start;
        int dest;
        int cost;

        cin >> start >> dest >> cost;

        adjs[start].push_back({ dest, cost });
    }

    // dest -> start
    dijkstra(destToStartCosts, x);

    for (int i : views::iota(1, n + 1))
    {
        if (i == x)
            continue;

        // start -> dest
        dijkstra(startToDestCosts, i);

        res = max(res, destToStartCosts[i] + startToDestCosts[x]);
    }

    println("{}", res);

    return 0;
}
