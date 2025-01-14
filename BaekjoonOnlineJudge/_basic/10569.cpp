#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int v;
int e;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> v >> e;

        res = 2 - v + e;

        cout << res << '\n';
    }

    return 0;
}
