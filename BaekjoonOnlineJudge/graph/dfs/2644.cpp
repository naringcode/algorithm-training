#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constinit int INF = 99'999'999;

int n;
int m;

int a;
int b;

vector<int> adjs[104];
bool visited[104];

int res = -1;

void go(int depth, int here)
{
    if (here == b)
    {
        res = depth;

        return;
    }

    for (int there : adjs[here])
    {
        if (visited[there])
            continue;

        visited[there] = true;

        go(depth + 1, there);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> a >> b;

    cin >> m;

    for (int i : views::iota(0, m))
    {
        int x;
        int y;
        
        cin >> x >> y;

        adjs[x].push_back(y);
        adjs[y].push_back(x);
    }

    ranges::fill(visited, false);

    visited[a] = true;
    go(0, a);

    println("{}", res);

    return 0;
}
