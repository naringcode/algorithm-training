#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (res * res + res + 1 != n)
    {
        res++;
    }

    println("{}", res);

    return 0;
}
