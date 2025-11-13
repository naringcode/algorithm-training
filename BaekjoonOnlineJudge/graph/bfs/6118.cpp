#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int a;
int b;

vector<int> adjs[20004];
int dist[20004];

int res;

void go()
{
    queue<int> q;
    q.push(1);

    dist[1] = 0;

    while (q.size() > 0)
    {
        int here = q.front();
        q.pop();

        for (int there : adjs[here])
        {
            if (dist[there] != -1)
                continue;

            dist[there] = dist[here] + 1;
            q.push(there);
        }
    }

    int mxDist = ranges::max(dist);

    int cnt   = 0;
    int mxIdx = 999'999'999;

    for (int idx : views::iota(1, n + 1))
    {
        if (dist[idx] == mxDist)
        {
            mxIdx = min(mxIdx, idx);
            cnt++;
        }
    }

    println("{} {} {}", mxIdx, mxDist, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        cin >> a >> b;

        adjs[a].push_back(b);
        adjs[b].push_back(a);
    }

    ranges::fill(dist, -1);

    go();

    return 0;
}
