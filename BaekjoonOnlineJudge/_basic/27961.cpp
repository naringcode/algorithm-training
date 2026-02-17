#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll x;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n > 0)
    {
        x = 1;
        res = 1;

        while (x < n)
        {
            x *= 2;

            res++;
        }
    }

    println("{}", res);

    return 0;
}
