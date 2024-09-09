#include <bits/stdc++.h>

using namespace std;

double x;
double y;

int n;

double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> y;

    res = (1000.0 / y) * x;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        res = min(res, (1000.0 / y) * x);
    }

    cout.precision(2);
    cout << fixed << res;

    return 0;
}
