#include <bits/stdc++.h>

using namespace std;

struct Edge
{
    int to;
    int64_t weight;
};

constexpr int64_t INF = 999'999'999'999;

int n;
int m;
int k;

int from;
int to;
int64_t weight;

vector<Edge> adj[10'004];
int64_t dist[10'004][24];

// 비용, 카운팅 k, 노드
priority_queue<tuple<int64_t, int, int>> pq;

int64_t minCost = INF;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    fill(&dist[0][0], &dist[0][0] + 10'004 * 24, INF);

    for (int i = 0; i < m; i++)
    {
        cin >> from >> to >> weight;

        adj[from].push_back({ to, weight });
        adj[to].push_back({ from, weight });
    }

    pq.push({ 0, k, 1 });

    while (pq.size() > 0)
    {
        // structured binding
        auto [cost, remainingK, from] = pq.top();
        pq.pop();

        // 뒤집기
        cost = -cost;

        // 찾았다!
        if (n == from)
        {
            minCost = cost;

            break;
        }

        // 갱신된 상태라면 넘기기
        if (cost > dist[from][remainingK])
            continue;

        for (const Edge& edge : adj[from])
        {
            auto nextCost = cost + edge.weight;

            if (nextCost < dist[edge.to][remainingK])
            {
                // 다음 경로의 최소 비용 갱신
                dist[edge.to][remainingK] = nextCost;
            
                pq.push({ -nextCost, remainingK, edge.to });
            }

            if (remainingK > 0)
            {
                // 다음 경로의 최소 비용 갱신
                if (cost < dist[edge.to][remainingK - 1])
                {
                    dist[edge.to][remainingK - 1] = cost;

                    pq.push({ -cost, remainingK - 1, edge.to });
                }
            }
        }
    }
    
    cout << minCost;

    return 0;
}
