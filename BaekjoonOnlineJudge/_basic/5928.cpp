#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int d;
int h;
int m;

int startM = 11 + (11 * 60) + (11 * 60 * 24);
int conv;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> d >> h >> m;

    conv = m + (h * 60) + (d * 60 * 24);

    conv -= startM;

    if (conv >= 0)
    {
        cout << conv;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
