#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int l;
int r;
int a;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> l >> r >> a;

    int temp = abs(l - r);
    temp = min(temp, a);

    res = l + r + a;
    a -= temp;

    if (l < r)
    {
        l += temp;
    }
    else
    {
        r += temp;
    }

    if (l == r)
    {
        res -= a % 2;
    }
    else
    {
        res -= temp;
    }

    println("{}", res);

    return 0;
}
