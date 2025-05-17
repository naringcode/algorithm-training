#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int r;

vector<int> vec[100'004];
bool visited[100'004];

int res[100'004];

void go(int here)
{
    queue<int> q;

    q.push(here);
    visited[here] = true;

    int cnt = 1;

    while (q.size() > 0)
    {
        here = q.front();
        q.pop();

        res[here] = cnt++;

        for (int there : vec[here])
        {
            if (visited[there])
                continue;

            visited[there] = true;
            q.push(there);
        }
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
        int u;
        int v;

        cin >> u >> v;

        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for (int i : views::iota(1, n + 1))
    {
        ranges::sort(vec[i], greater{ });
    }

    go(r);

    for (int i : views::iota(1, n + 1))
    {
        println("{}", res[i]);
    }

    return 0;
}
