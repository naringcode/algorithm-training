#include <bits/stdc++.h>

using namespace std;

double val;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> val;

    val = 100.0 / ((1.609344 / 3.785411784) * val);

    // val *= 3.785411784;
    // val /= 1609.344;
    //
    // val = 1000.0 * val;

    cout.precision(6);
    cout << fixed << val;

    return 0;
}
