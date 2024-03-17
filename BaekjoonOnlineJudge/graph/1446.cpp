#include <bits/stdc++.h>

using namespace std;

int n;
int d;

int start;
int dest;
int weight;

int res;

struct Edge
{
    int to;
    int weight;
};

// 각 정점은 Edge 리스트를 가진다.
vector<Edge> adj[10004];

void go(int to, int sum)
{
    if (to == d)
    {
        res = min(res, sum);

        return;
    }

    go(to + 1, sum + 1);

    auto& edges = adj[to];
    for (auto& edge : edges)
    {
        go(edge.to, sum + edge.weight);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        cin >> start >> dest >> weight;

        if (dest > d)
            continue;

        auto& edges = adj[start];
        bool  found = false;

        for (auto& edge : edges)
        {
            if (edge.to == dest)
            {
                edge.weight = min(edge.weight, weight);
                found = true;

                break;
            }
        }

        // 간선 정보가 없었음
        if (false == found)
        {
            edges.push_back({ dest, weight });
        }
    }

    res = d;

    for (int i = 0; i < d; i++)
    {
        auto& edges = adj[i];

        for (auto& edge : edges)
        {
            go(edge.to, edge.weight + i);
        }
    }

    cout << res;

    return 0;
}
