#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll m;

set<ll> numSet;
ll      num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> num;

        numSet.insert(num);
    }

    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> num;

        if (numSet.end() == numSet.find(num))
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }

    return 0;
}
