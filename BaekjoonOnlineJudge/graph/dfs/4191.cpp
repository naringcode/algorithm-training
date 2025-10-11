#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int n;
int m;
int l;

bool visited[10004];
vector<int> adjs[10004];

int res;

void go(int here)
{
    if (visited[here] == true)
        return;

    visited[here] = true;

    res++;

    for (int there : adjs[here])
    {
        go(there);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    
    while (t--)
    {
        cin >> n >> m >> l;

        fill(visited, visited + n, false);

        for (int i : views::iota(0, n))
        {
            adjs[i].clear();
        }

        for (int i : views::iota(0, m))
        {
            int x;
            int y;

            cin >> x >> y;
            x--;
            y--;

            adjs[x].push_back(y);
        }

        res = 0;

        for (int i : views::iota(0, l))
        {
            int x;

            cin >> x;
            x--;

            go(x);
        }

        println("{}", res);
    }

    return 0;
}
