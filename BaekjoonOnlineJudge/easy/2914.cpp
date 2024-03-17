#include <bits/stdc++.h>

using namespace std;

double a, b;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    res = (a * (b - 1)) + 1;

    cout << res;

    return 0;
}