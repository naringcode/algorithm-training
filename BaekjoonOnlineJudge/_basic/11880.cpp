#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

ll a;
ll b;
ll c;

ll r1;
ll r2;
ll r3;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
    
        r1 = ((a + b) * (a + b)) + (c * c);
        r2 = ((a + c) * (a + c)) + (b * b);
        r3 = ((b + c) * (b + c)) + (a * a);
    
        res = min({ r1, r2, r3 });
    
        println("{}", res);
    }

    return 0;
}
