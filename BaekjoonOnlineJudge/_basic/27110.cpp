#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int a;
int b;
int c;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> a >> b >> c;

    res += min(a, n);
    res += min(b, n);
    res += min(c, n);

    println("{}", res);

    return 0;
}
