#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i *= 10)
    {
        res += n - i + 1;
    }

    cout << res;

    return 0;
}
