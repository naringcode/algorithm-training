#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constinit int INF = 99'999'999;

int n;
int e;

int v1;
int v2;

vector<pair<int, int>> adjs[1004];
int dist[1004];

int res1;
int res2;

void dijkstra(int start)
{
    ranges::fill(dist, INF);

    priority_queue<pair<int, int>> pq;
    pq.push({ 0, start });

    dist[start] = 0;

    while (pq.size() > 0)
    {
        auto [cost, here] = pq.top();
        pq.pop();

        cost = -cost;

        if (cost != dist[here])
            continue;

        for (auto [there, weight] : adjs[here])
        {
            if (dist[here] + weight < dist[there])
            {
                dist[there] = dist[here] + weight;

                pq.push({ -dist[there], there });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> e;

    for (int i : views::iota(0, e))
    {
        int from;
        int to;
        int weight;

        cin >> from >> to >> weight;

        adjs[from].push_back({ to, weight });
        adjs[to].push_back({ from, weight });
    }

    cin >> v1 >> v2;

    dijkstra(1);

    res1 = dist[v1];
    res2 = dist[v2];

    // v1 -> v2 -> n
    dijkstra(v1);

    res1 += dist[v2];

    dijkstra(v2);

    res1 += dist[n];

    // v2 -> v1 -> n
    dijkstra(v2);

    res2 += dist[v1];

    dijkstra(v1);

    res2 += dist[n];

    if (res1 >= INF && res2 >= INF)
    {
        println("-1");
    }
    else
    {
        println("{}", min(res1, res2));
    }

    return 0;
}
