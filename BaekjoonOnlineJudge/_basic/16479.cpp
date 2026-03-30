#include <bits/stdc++.h>

using namespace std;

using ll = long long;

double k;
double d1;
double d2;

double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> d1 >> d2;

    res = max(d1,d2) - min(d1,d2);
    res /= 2.0;

    res = k * k - res * res;

    println("{}", res);

    return 0;
}
