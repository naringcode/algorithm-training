#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int c;

vector<int> adjs[104];
int visited[104];

bool cycle = false;

void go(int here)
{
    visited[here] = 1;

    for (int there : adjs[here])
    {
        if (visited[there] == 1)
        {
            cycle = true;
        }
        else if (visited[there] == 0)
        {
            go(there);
        }
    }
    
    visited[here] = 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(1, n))
    {
        cin >> m;

        while (m--)
        {
            cin >> c;

            adjs[i].push_back(c);
        }
    }

    go(1);

    if (cycle == true)
    {
        println("CYCLE");
    }
    else
    {
        println("NO CYCLE");
    }
    
    return 0;
}
