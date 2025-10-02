#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int f;
int s;
int g;
int u;
int d;

int res = -1;

bool visited[1'000'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> f >> s >> g >> u >> d;

    // here, cost
    queue<pair<int, int>> q;
    q.push({ s, 0 });

    while (q.size() > 0)
    {
        auto [here, cost] = q.front();
        q.pop();

        if (here == g)
        {
            res = cost;

            break;
        }

        // u
        int nxtU = here + u;
        if (nxtU <= f)
        {
            if (visited[nxtU] == false)
            {
                visited[nxtU] = true;

                q.push({ nxtU, cost + 1 });
            }
        }

        // d
        int nxtD = here - d;
        if (nxtD > 0)
        {
            if (visited[nxtD] == false)
            {
                visited[nxtD] = true;

                q.push({ nxtD, cost + 1 });
            }
        }
    }

    if (res == -1)
    {
        println("use the stairs");
    }
    else
    {
        println("{}", res);
    }

    return 0;
}
