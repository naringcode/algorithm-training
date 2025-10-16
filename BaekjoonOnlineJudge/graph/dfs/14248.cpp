#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int board[100'004];
int visited[100'004];

int n;
int s;

int res;

void go(int here)
{
    if (visited[here] == true)
        return;

    visited[here] = true;

    res++;

    int next[2]{ here - board[here], here + board[here] };

    for (int there : next)
    {
        if (there <= 0 || there > n)
            continue;

        go(there);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(1, n + 1))
    {
        cin >> board[idx];
    }

    cin >> s;

    go(s);

    println("{}", res);
    
    return 0;
}
