#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (ll i : views::iota(1, n))
    {
        res += i * n + i;
    }

    println("{}", res);

    return 0;
}
