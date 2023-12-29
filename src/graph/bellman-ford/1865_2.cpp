#include <bits/stdc++.h>

using namespace std;

struct Edge
{
    int from;
    int to;
    int64_t weight;
};

constexpr int64_t INF = 999'999'999'999;

int tc;

int n;
int m;
int w;

int s;
int e;
int64_t t;

vector<Edge> edges;
int64_t cost[504];

bool go(int idx)
{
    cost[idx] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (const Edge& edge : edges)
        {
            // if (INF == cost[edge.from])
            //     continue;

            cost[edge.to] = min(cost[edge.to], cost[edge.from] + edge.weight);
        }
    }

    // cycle
    for (const Edge& edge : edges)
    {
        // if (INF == cost[edge.from])
        //     continue;

        if (cost[edge.to] > cost[edge.from] + edge.weight)
        {
            cout << "YES\n";

            return true;
        }
    }

    cout << "NO\n";

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> tc;

    while (tc--)
    {
        cin >> n >> m >> w;

        edges.clear();
        fill(cost, cost + 504, INF);

        for (int i = 0; i < m; i++)
        {
            cin >> s >> e >> t;

            edges.push_back({ s, e, t });
            edges.push_back({ e, s, t });
        }

        for (int i = 0; i < w; i++)
        {
            cin >> s >> e >> t;

            edges.push_back({ s, e, -t });
        }

        // bool negCycle = false;
        //
        // for (int i = 1; i <= n; i++)
        // {
        //     // 모든 정점을 대상으로 방문하기 위한 것
        //     // 방문되지 않았으면 방문 시도
        //     if (INF != cost[i])
        //         continue;
        //
        //     negCycle = go(i);
        //
        //     if (true == negCycle)
        //     {
        //         cout << "YES\n";
        //
        //         break;
        //     }
        // }
        //
        // if (false == negCycle)
        // {
        //     cout << "NO\n";
        // }

        go(1);
    }

    return 0;
}
