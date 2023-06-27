#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int v;

vector<int> adj[1004];
bool visited[1004];

void addEdge(int from, int to)
{
    adj[from].push_back(to);
    adj[to].push_back(from);
}

void dfs(int u)
{
    visited[u] = true;

    cout << u << ' ';

    for (int v : adj[u])
    {
        if (true == visited[v])
            continue;

        dfs(v);
    }
}

void bfs(int here)
{
    queue<int> q;

    visited[here] = true;

    cout << here << ' ';

    q.push(here);

    while (q.size())
    {
        here = q.front();

        q.pop();

        for (int there : adj[here])
        {
            if (true == visited[there])
                continue;

            visited[there] = true;

            cout << there << ' ';

            q.push(there);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> v;
    
    for (int i = 0; i < m; i++)
    {
        int u;
        int v;

        cin >> u >> v;

        addEdge(u, v);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(v);

    cout << '\n';

    memset(visited, 0x00, sizeof(visited));

    bfs(v);

    return 0;
}
