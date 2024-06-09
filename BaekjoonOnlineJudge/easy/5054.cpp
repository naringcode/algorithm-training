#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int val;

int mn;
int mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        mn = numeric_limits<int>::max();
        mx = numeric_limits<int>::min();

        while (n--)
        {
            cin >> val;

            mn = min(mn, val);
            mx = max(mx, val);
        }

        cout << (mx - mn) * 2 << '\n';
    }

    return 0;
}
