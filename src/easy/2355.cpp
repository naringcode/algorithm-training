#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    if (a > b)
    {
        std::swap(a, b);
    }

    res = ((b - a + 1) * (a + b)) / 2;

    cout << res;

    return 0;
}