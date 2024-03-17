#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int a;
int b;

vector<int> adj[10000];
bool        visited[10000];

int         mx;
vector<int> res;

int dfs(int here)
{
    int ret = 1;

    visited[here] = true;

    for (int there : adj[here])
    {
        if (true == visited[there])
            continue;

        ret += dfs(there);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        // a가 b를 신뢰 -> b를 해킹하면 a도 해킹 가능
        adj[b - 1].push_back(a - 1);
    }

    for (int i = 0; i < n; i++)
    {
        memset(visited, 0x00, sizeof(visited));

        int temp = dfs(i);

        if (temp > mx)
        {
            mx = temp;

            res.clear();

            res.push_back(i + 1);
        }
        else if (temp == mx)
        {
            res.push_back(i + 1);
        }
    }

    sort(res.begin(), res.end());

    for (int elem : res)
    {
        cout << elem << ' ';
    }

    return 0;
}
