#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

const ll kArr[]{ 1, 5, 10, 50 };
set<int> mySet;

void go(int cnt, int idx, ll sum)
{
    if (cnt == 0)
    {
        mySet.insert(sum);

        return;
    }

    for (int i : views::iota(idx, ssize(kArr)))
    {
        go(cnt - 1, i, sum + kArr[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    go(n, 0, 0);

    println("{}", mySet.size());

    return 0;
}
