#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;

int k;
int x;

int l;
int r;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;
    cin >> k >> x;

    l = k - x;
    r = k + x;

    l = max(l, a);
    r = min(r, b);

    res = r - l + 1;

    if (res <= 0)
    {
        println("IMPOSSIBLE");
    }
    else
    {
        println("{}", res);
    }

    return 0;
}
