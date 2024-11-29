#include <bits/stdc++.h>

using namespace std;

vector<set<int>> adjs;
int visited[100'004];

int n;
int m;

int start;

int from;
int to;

int cnt;

void dfs(int here)
{
    if (0 != visited[here])
        return;

    visited[here] = ++cnt;

    for (int elem : adjs[here])
    {
        dfs(elem);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> start;

    adjs.resize(n);
    start--;

    for (int i = 0; i < m; i++)
    {
        cin >> from >> to;

        from--;
        to--;

        adjs[from].insert(to);
        adjs[to].insert(from);
    }

    dfs(start);

    for (int i = 0; i < n; i++)
    {
        cout << visited[i] << '\n';
    }

    return 0;
}