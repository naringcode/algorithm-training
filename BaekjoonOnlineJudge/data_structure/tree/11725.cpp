#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

int a;
int b;

set<int> edgeLists[100'004];
bool visited[100'004];

int res[100'004];

void dfs(int here)
{
    visited[here] = true;

    set<int>& edgeList = edgeLists[here];

    for (int there : edgeList)
    {
        if (visited[there])
            continue;

        res[there] = here;

        dfs(there);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;

        edgeLists[a].insert(b);
        edgeLists[b].insert(a);
    }

    dfs(1);

    for (int i = 2; i <= n; i++)
    {
        cout << res[i] << '\n';
    }

    return 0;
}
