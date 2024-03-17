#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;
ll c;

ll cash;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    cash = c - b;

    if (cash <= 0)
    {
        cout << -1;

        return 0;
    }

    res = a / cash + 1;

    cout << res;

    return 0;
}