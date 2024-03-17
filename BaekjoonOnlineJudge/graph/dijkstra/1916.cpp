#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;
int m;

int a;
int b;
int c;

vector<pair<int, int>> adj[1004];
bool visited[1004];
int  minCost[1004];

priority_queue<pair<int, int>> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    std::fill(minCost, minCost + 1004, INF);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;

        adj[a].push_back({ b, -c });
    }

    cin >> a >> b;

    minCost[a] = 0;
    pq.push({ 0, a });

    while (pq.size() > 0)
    {
        auto [cost, node] = pq.top();
        pq.pop();

        cost = -cost;

        // 비용이 갱신된 상황
        if (cost != minCost[node])
            continue;

        visited[node] = true;
        
        for (auto [nextNode, nextCost] : adj[node])
        {
            nextCost = -nextCost;

            if (minCost[nextNode] > minCost[node] + nextCost)
            {
                minCost[nextNode] = minCost[node] + nextCost;

                pq.push({ -minCost[nextNode], nextNode });
            }
        }
    }

    cout << minCost[b];

    return 0;
}
