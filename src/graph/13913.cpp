#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int visited[200'004];
int trace[200'004];

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

    q.push(n);

    while (q.size())
    {
        int here = q.front();

        q.pop();
        
        if (k == here)
            return;

        for (int idx = 0; idx < 3; idx++)
        {
            int there = make_next(here, idx);

            if (0 > there || 200'000 < there)
                continue;

            if (visited[there])
                continue;

            q.push(there);

            visited[there] = visited[here] + 1;

            trace[there] = here;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    // 0번째 인덱스 방지용
    memset(trace, -1, sizeof(trace));

    bfs();

    cout << visited[k] - 1 << '\n';

    vector<int> vec;

    vec.push_back(k);

    // 0번째 인덱스가 존재할 수도 있다...
    // while (0 != trace[k])
    // {
    //     vec.push_back(trace[k]);
    //
    //     k = trace[k];
    // }

    while (-1 != trace[k])
    {
        vec.push_back(trace[k]);
    
        k = trace[k];
    }

    reverse(vec.begin(), vec.end());

    for (int elem : vec)
    {
        cout << elem << ' ';
    }

    return 0;
}
