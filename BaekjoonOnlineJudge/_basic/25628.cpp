#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    a /= 2;

    println("{}", min(a, b));

    return 0;
}
