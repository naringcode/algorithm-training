#include <bits/stdc++.h>

using namespace std;

double r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r;

    cout.precision(6);
    cout << fixed << r * r * std::numbers::pi_v<double> << '\n';
    cout << fixed << ((r * 2) * (r * 2)) / 2;

    return 0;
}
