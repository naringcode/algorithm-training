#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<ll> vec;

ll b;
ll c;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    vec.resize(n);

    for (ll& elem : vec)
    {
        cin >> elem;
    }

    cin >> b >> c;

    res = n;

    for (ll elem : vec)
    {
        elem -= b;

        if (elem > 0)
        {
            res += elem / c;
            
            if (0 != elem % c)
            {
                res++;
            }
        }
    }

    cout << res;

    return 0;
}
