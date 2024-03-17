#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int a;
int b;

vector<int> adj[32004];
int indegrees[32004];

bool visited[32004];

list<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a--;
        b--;

        adj[a].push_back(b);
        indegrees[b]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (true == visited[i])
            continue;

        if (0 == indegrees[i])
        {
            visited[i] = true;

            for (int to : adj[i])
            {
                indegrees[to]--;
            }

            res.push_back(i);

            i = -1;
        }
    }

    for (int elem : res)
    {
        cout << elem + 1 << ' ';
    }

    return 0;
}
