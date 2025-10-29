#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int a;
int b;
int c;

vector<pair<int, ll>> adjs[5004];
bool visited[5004];

ll res;

void go(int here, ll depth)
{
    visited[here] = true;
    
    res = max(res, depth);

    for (auto [there, dist] : adjs[here])
    {
        if (visited[there] == true)
            continue;

        go(there, depth + dist);
    }

    visited[here] = false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    n--;

    while (n--)
    {
        cin >> a >> b >> c;

        adjs[a].push_back({ b, c });
        adjs[b].push_back({ a, c });
    }

    go(1, 0);

    println("{}", res);

    return 0;
}
