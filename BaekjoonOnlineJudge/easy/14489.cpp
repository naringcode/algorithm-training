#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;
ll c;

ll res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    res = (a + b) - 2 * c;

    if (res < 0)
    {
        cout << a + b;
    }
    else
    {
        cout << res;
    }

    return 0;
}