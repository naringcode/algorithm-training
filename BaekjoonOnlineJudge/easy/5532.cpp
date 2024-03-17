#include <bits/stdc++.h>

using namespace std;

int l;
int a;
int b;
int c;
int d;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> l >> a >> b >> c >> d;

    res = (a / c) + ((0 != a % c) ? 1 : 0);
    res = std::max(res, (b / d) + ((0 != b % d) ? 1 : 0));

    res = std::max(0, l - res);

    cout << res;

    return 0;
}
