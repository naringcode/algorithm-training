#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll inc;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    inc = 7;
    res = 5;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        res += inc;
        res %= 45678;

        inc += 3;
    }

    cout << res;

    return 0;
}