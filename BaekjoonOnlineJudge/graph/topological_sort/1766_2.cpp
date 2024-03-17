#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int a;
int b;

vector<int> adj[32004];
int indegrees[32004];

priority_queue<int> pq;

vector<int> res;

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
        if (0 == indegrees[i])
        {
            pq.push(-i);
        }
    }

    while (false == pq.empty())
    {
        int here = -pq.top();
        pq.pop();

        for (int there : adj[here])
        {
            indegrees[there]--;

            if (0 == indegrees[there])
            {
                pq.push(-there);
            }
        }

        res.push_back(here);
    }

    for (int elem : res)
    {
        cout << elem + 1 << ' ';
    }

    return 0;
}
