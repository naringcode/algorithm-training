#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int m;

int u;
int v;

vector<int> vecArr[1004];
bool visited[1004];

int res;

void go(int here)
{
    if (visited[here])
        return;

    visited[here] = true;

    for (int there : vecArr[here])
    {
        if (false == visited[there])
        {
            go(there);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;

        vecArr[u].push_back(v);
        vecArr[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (false == visited[i])
        {
            go(i);

            res++;
        }
    }

    cout << res;

    return 0;
}
