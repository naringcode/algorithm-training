#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int xa;
int yb;
int yc;
int yd;
int p;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> xa >> yb >> yc >> yd >> p;

    res = xa * p;
    res = min(res, yb + max(0, p - yc) * yd);

    println("{}", res);

    return 0;
}
