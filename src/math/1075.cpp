#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll f;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> f;

    n = n - n % 100;

    for (res = 0; res < 100; res++)
    {
        if (0 == (n + res) % f)
            break;
    }

    if (res < 10)
    {
        cout << 0;
    }

    cout << res;

    return 0;
}
