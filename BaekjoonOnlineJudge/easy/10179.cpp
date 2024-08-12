#include <bits/stdc++.h>

using namespace std;

int t;

double n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        n -= n * 0.2;

        cout.precision(2);
        cout << "$" << fixed << n << '\n';
    }

    return 0;
}
