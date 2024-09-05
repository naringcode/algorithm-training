#include <bits/stdc++.h>

using namespace std;

int t;

double a;
double b;
double c;
double d;
double e;

double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> d >> e;

        a *= 350.34;
        b *= 230.90;
        c *= 190.55;
        d *= 125.30;
        e *= 180.90;

        res = a + b + c + d + e;

        cout.precision(2);
        cout << "$" << fixed << res << '\n';
    }

    return 0;
}
