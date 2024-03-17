#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll num;

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

    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> num;

        while (true)
        {
            if (IsPrime(num))
            {
                cout << num << '\n';

                break;
            }

            num++;
        }
    }

    return 0;
}
