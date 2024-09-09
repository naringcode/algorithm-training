#include <bits/stdc++.h>

using namespace std;

double a;
double b;

double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    res = 2.0 * a;
    res += 2.0 * 3.141592 * b;

    cin.precision(6);
    cout << fixed << res;

    return 0;
}
