#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll curr;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (curr <= n)
    {
        curr += 2 * res * res + 2 * res + 1;

        res++;
    }

    println("{}", res - 1);

    return 0;
}
