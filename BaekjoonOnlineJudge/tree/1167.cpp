#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int v;

int a;
pair<int, ll> b;

vector<pair<int, ll>> adj[100'004]; 
bool visited[100'004];

int mxIdx;
ll  res;

// 가장 먼 것을 찾고 -> DFS 다시 시작

void go(int here, ll sum)
{
    if (visited[here])
        return;

    visited[here] = true;

    if (sum > res)
    {
        mxIdx = here;

        res = sum;
    }

    for (auto& pair : adj[here])
    {
        if (true == visited[pair.first])
            continue;

        go(pair.first, sum + pair.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> v;

    // 주의!!! 양방향 트리임!!!
    for (int i = 0; i < v; i++)
    {
        cin >> a;

        while (true)
        {
            cin >> b.first;

            if (-1 == b.first)
                break;

            cin >> b.second;

            adj[a].push_back(b);
        }
    }

    go(1, 0);

    memset(visited, 0, sizeof(visited));

    go(mxIdx, 0);

    cout << res;

    return 0;
}