#include <bits/stdc++.h>

using namespace std;

int t;

int n; // the number of nodes in the graph.
int m; // the number of edges in the graph.

int a;
int b;

vector<int> adj[1004];
bool visited[1004];

int dfs(int here)
{
    int ret = 1;

    for (int there : adj[here])
    {
        if (visited[there])
            continue;

        visited[there] = true;

        ret += dfs(there);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
        }

        memset(visited, 0, sizeof(visited));

        cin >> n >> m;

        bool isTree = true;

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;

            for (int elem : adj[a])
            {
                if (elem == b)
                {
                    isTree = false;

                    break;
                }
            }

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        if (false == isTree)
        {
            cout << "graph\n";

            continue;
        }

        if (n - 1 != m)
        {
            cout << "graph\n";

            continue;
        }

        // 1번 조건
        visited[1] = true;

        if (n != dfs(1))
        {
            isTree = false;
        }

        if (true == isTree)
        {
            cout << "tree\n";
        }
        else
        {
            cout << "graph\n";
        }
    }

    return 0;
}