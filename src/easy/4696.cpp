#include <bits/stdc++.h>

using namespace std;

double val;
double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> val;

        if (0.0 == val)
            break;

        res = 1.0 + (val) + (val * val) + (val * val * val) + (val * val * val * val);

        cout.precision(2);
        cout << fixed << res << '\n';
    }

    return 0;
}
