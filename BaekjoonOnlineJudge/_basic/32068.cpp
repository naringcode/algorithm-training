#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

ll l;
ll r;
ll s;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> l >> r >> s;
        
        ll temp1 = 2 * (r - s);
        ll temp2 = 2 * (s - l) + 1;

        res = min(temp1, temp2);

        println("{}", res);
    }
    
    return 0;
}
