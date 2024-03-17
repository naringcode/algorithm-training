#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll m;
ll n;

bool IsPrime(ll num)
{
    if (1 >= num)
        return false;

    if (2 == num)
        return true;

    if (0 == num % 2)
        return false;

    for (ll i = 3; i * i <= num; i++)
    {
        if (0 == num % i)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;

    while (m <= n)
    {
        if (IsPrime(m))
        {
            cout << m << '\n';
        }

        m++;
    }

    return 0;
}
