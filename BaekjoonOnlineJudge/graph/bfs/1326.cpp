#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[10004];
int visited[10004];

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(1, n + 1))
    {
        cin >> arr[idx];

        visited[idx] = -1;
    }

    cin >> a >> b;

    queue<int> q;
    q.push({ a });
    visited[a] = 0;

    while (q.size())
    {
        int here = q.front();
        q.pop();

        if (here == b)
        {
            println("{}", visited[here]);

            return 0;
        }

        int there = here;
        while (there + arr[here] <= n)
        {
            there += arr[here];

            if (visited[there] != -1)
                continue;

            visited[there] = visited[here] + 1;

            q.push(there);
        }
        
        there = here;
        while (there - arr[here] >= 1)
        {
            there -= arr[here];

            if (visited[there] != -1)
                continue;

            visited[there] = visited[here] + 1;

            q.push(there);
        }
    }

    println("-1");

    return 0;
}
