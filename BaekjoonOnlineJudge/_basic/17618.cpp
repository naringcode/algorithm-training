#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

int res;

ll go(ll num)
{
    ll ret = 0;

    while (num > 0)
    {
        ret += num % 10;
        num /= 10;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (ll num : views::iota(1, n + 1))
    {
        if (num % go(num) == 0)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
