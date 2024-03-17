#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int visited[100'004];
int cnt[100'004];

int make_next(int here, int idx)
{
    switch (idx)
    {
        case 0 : return here + 1;
        case 1 : return here - 1;
        case 2 : return here * 2;
    }
    
    return 0;
}

void bfs()
{
    queue<int> q;

    visited[n] = 1;
    cnt[n] = 1;

    q.push(n);

    while (q.size())
    {
        int here = q.front();

        q.pop();

        for (int idx = 0; idx < 3; idx++)
        {
            int there = make_next(here, idx);

            if (0 > there || 100'000 < there)
                continue;

            if (false == visited[there])
            {
                q.push(there);

                visited[there] = visited[here] + 1;
                cnt[there] += cnt[here];
            }
            else if (visited[there] == visited[here] + 1)
            {
                cnt[there] += cnt[here];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    bfs();

    cout << visited[k] - 1 << '\n' << cnt[k];

    return 0;
}
