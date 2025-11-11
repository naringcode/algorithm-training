#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

// child -> parent
int parents[24];

int go(int node, int depth)
{
    if (parents[node] == -2)
        return depth;

    return go(parents[node], depth + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int child : views::iota(0, n))
    {
        int parent;
        cin >> parent;

        parents[child] = parent - 1;
    }

    for (int child : views::iota(0, n))
    {
        println("{}", go(child, 0));
    }

    return 0;
}
