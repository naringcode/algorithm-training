#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int x;

int mx;
int mn;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        mn = 999'999'999;
        mx = -999'999'999;

        while (n--)
        {
            cin >> x;

            mn = min(mn, x);
            mx = max(mx, x);
        }

        cout << mn << ' ' << mx << '\n';
    }

    return 0;
}
