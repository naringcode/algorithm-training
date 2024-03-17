#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int indegree[200'004];

pair<int, int> adj[200'004];
bool       visited[200'004];

queue<tuple<int, int, int>> q;

int noCnt = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;

        indegree[a]++;
        indegree[b]++;

        adj[i] = { a, b };
    }

    for (int i = 1; i <= n; i++)
    {
        // 2개의 선물을 받지 못 하는 경우
        if (indegree[i] <= 1)
        {
            q.push({ i, adj[i].first, adj[i].second });
        }
    }

    while (q.size() > 0)
    {
        auto [node, outA, outB] = q.front();
        q.pop();

        if (true == node[visited])
            continue;

        node[visited] = true;

        noCnt++;

        indegree[outA]--;
        indegree[outB]--;

        if (indegree[outA] <= 1)
        {
            q.push({ outA, adj[outA].first, adj[outA].second });
        }

        if (indegree[outB] <= 1)
        {
            q.push({ outB, adj[outB].first, adj[outB].second });
        }
    }

    cout << (n - noCnt) << '\n';

    for (int i = 1; i <= n; i++)
    {
        if (false == visited[i])
        {
            cout << i << ' ';
        }
    }

    return 0;
}
