#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int r;

vector<int> adj[100'004];
bool visited[100'004];

int res[100'004];
int cnt = 1;

void dfs(int from)
{
    visited[from] = true;
    res[from] = cnt++;

    for (int to : adj[from])
    {
        if (visited[to] == true)
            continue;

        dfs(to);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> r;

    for (int i : views::iota(0, m))
    {
        int from;
        int to;

        cin >> from >> to;

        adj[from].push_back(to);
        adj[to].push_back(from);
    }

    // 정점 번호를 내림차순으로 정렬
    for (vector<int>& vec : adj)
    {
        ranges::sort(vec, greater{ });
    }

    dfs(r);

    for (int idx : views::iota(1, n + 1))
    {
        println("{}", res[idx]);
    }

    return 0;
}
