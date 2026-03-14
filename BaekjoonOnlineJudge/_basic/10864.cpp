#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int a;
int b;

set<int> mySets[1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        cin >> a >> b;

        mySets[a].insert(b);
        mySets[b].insert(a);
    }

    for (int i : views::iota(0, n))
    {
        i++;

        println("{}", mySets[i].size());
    }

    return 0;
}
