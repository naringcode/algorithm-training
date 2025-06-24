#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    a = min(a, b + 1);
    b = min(b, a - 1);

    println("{}", a + b);

    return 0;
}
