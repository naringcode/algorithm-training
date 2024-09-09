#include <bits/stdc++.h>

using namespace std;

double a, b, c, d;

double temp;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> d;

    temp = a / c + b / d;

    if (temp < c / d + a / b)
    {
        res = 1;

        temp = c / d + a / b;
    }

    if (temp < d / b + c / a)
    {
        res = 2;

        temp = d / b + c / a;
    }

    if (temp < b / a + d / c)
    {
        res = 3;

        temp = b / a + d / c;
    }

    cout << res;

    return 0;
}