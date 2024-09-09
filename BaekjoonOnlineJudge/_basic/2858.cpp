#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll r;
ll b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> b;

    ll temp = (r + 4) / 2;
    ll w = 1;

    while (true)
    {
        ll h = temp - w;

        if (r + b == w * h)
        {
            cout << h << ' ' << w;

            break;
        }

        w++;
    }

    return 0;
}
