#include <bits/stdc++.h>

using namespace std;

double a;
double b;
double c;

long long res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    res = max(a * b / c, a / b * c);

    cout << res;

    return 0;
}
