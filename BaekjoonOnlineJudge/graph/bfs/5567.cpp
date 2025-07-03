#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

vector<int> vec[504];
bool visited[504];

int res;

void go()
{
    queue<int> q;

    q.push(1);
    visited[1] = true;

    for (int i : views::iota(0, 2))
    {
        queue<int> temp;

        while (q.size() > 0)
        {
            int here = q.front();
            q.pop();

            for (int there : vec[here])
            {
                if (visited[there])
                    continue;

                visited[there] = true;
                temp.push(there);
            }
        }

        q = temp;

        res += q.size();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        int a;
        int b;

        cin >> a >> b;

        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    go();

    println("{}", res);

    return 0;
}
