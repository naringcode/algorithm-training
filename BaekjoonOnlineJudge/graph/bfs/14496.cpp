#include <bits/stdc++.h>

using namespace std;

using ll = long long;

map<int, vector<int>> mp;
bool visited[1004];

int a;
int b;

int n;
int m;

int res = 999'999'999;

void go()
{
    // here, cost
    queue<tuple<int, int>> q;
    q.push({ a, 0 });
    
    while (q.size() > 0)
    {
        auto [here, depth] = q.front();
        q.pop();

        if (here == b)
        {
            res = depth;

            return;
        }

        if (visited[here] == true)
            continue;

        visited[here] = true;

        for (int there : mp[here])
        {
            q.push({ there, depth + 1 });
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;
    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        int x;
        int y;

        cin >> x >> y;

        mp[x].push_back(y);
        mp[y].push_back(x);
    }

    go();

    if (res == 999'999'999)
    {
        res = -1;
    }

    println("{}", res);
    
    return 0;
}
