#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> adj[50];
int num;

int root;

int dfs(int u, int no)
{
    int ret = 0;

    if (u == no)
        return 0;

    if (0 == adj[u].size())
        return 1;

    if (1 == adj[u].size() && no == adj[u][0]) // 리프가 되어 버릴 예정
        return 1;

    for (int v : adj[u])
    {
        ret += dfs(v, no);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (-1 == num)
        {
            root = i;
        }
        else
        {
            adj[num].push_back(i);
        }
    }

    cin >> num;

    cout << dfs(root, num);

    return 0;
}
