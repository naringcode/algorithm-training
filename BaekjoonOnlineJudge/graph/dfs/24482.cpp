#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int r;

int u;
int v;

vector<int> adjs[100'004];
int depth[100'004];

void go(int here, int cost)
{
    depth[here] = cost;

    for (int there : adjs[here])
    {
        if (depth[there] != -1)
            continue;

        go(there, cost + 1);
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
        cin >> u >> v;

        adjs[u].push_back(v);
        adjs[v].push_back(u);
    }

    for (int idx : views::iota(1, n + 1))
    {
        ranges::sort(adjs[idx], greater{ });
    }

    ranges::fill(depth, -1);

    go(r, 0);

    for (int idx : views::iota(1, n + 1))
    {
        cout << depth[idx] << '\n';
    }

    return 0;
}
