#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int k;
int x;

vector<int> edges[300'004];
int visited[300'004];

vector<int> res;

void go()
{
    queue<int> q;
    q.push(x);

    visited[x] = 0;

    while (q.size())
    {
        int from = q.front();
        q.pop();

        if (visited[from] == k)
        {
            res.push_back(from);

            continue;
        }

        if (visited[from] > k)
            continue;

        for (int to : edges[from])
        {
            if (visited[to] != -1)
                continue;

            visited[to] = visited[from] + 1;
            q.push(to);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k >> x;

    ranges::fill(visited, -1);

    for (int i : views::iota(0, m))
    {
        int from;
        int to;

        cin >> from >> to;

        edges[from].push_back(to);
    }

    go();

    if (res.size() == 0)
    {
        println("-1");
    }
    else
    {
        ranges::sort(res);

        for (int elem : res)
        {
            println("{}", elem);
        }
    }

    return 0;
}
