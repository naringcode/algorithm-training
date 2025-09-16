#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 999'999'999;

int n;
int m;

int s;
int e;

vector<pair<int, int>> adjs[1004];
int minCosts[1004];
int parents[1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ranges::fill(minCosts, INF);
    ranges::fill(parents, INF);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        int from;
        int to;
        int weight;

        cin >> from >> to >> weight;

        adjs[from].push_back({ to, weight });
    }

    cin >> s >> e;

    priority_queue<pair<int, int>> pq;
    pq.push({ 0, s });
    minCosts[s] = 0;
    parents[s] = s;

    while (pq.size() > 0)
    {
        auto [dist, here] = pq.top();
        pq.pop();

        dist = -dist;

        if (here == e)
            break;

        if (minCosts[here] != dist)
            continue;

        for (auto [there, weight] : adjs[here])
        {
            if (minCosts[here] + weight < minCosts[there])
            {
                minCosts[there] = minCosts[here] + weight;
                parents[there] = here;

                pq.push({ -minCosts[there], there });
            }
        }
    }

    vector<int> road;
    road.push_back(e);

    int here = e;
    while (here != parents[here])
    {
        here = parents[here];

        road.push_back(here);
    }

    println("{}", minCosts[e]);
    println("{}", road.size());

    for (int elem : road | views::reverse)
    {
        print("{} ", elem);
    }

    return 0;
}
