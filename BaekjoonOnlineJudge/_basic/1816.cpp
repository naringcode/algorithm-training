#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> primes;

int n;
ll s;

bool IsPrime(ll num)
{
    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (ll i : views::iota(2, 1'000'001))
    {
        if (IsPrime(i) == true)
        {
            primes.push_back(i);
        }
    }

    cin >> n;

    while (n--)
    {
        cin >> s;

        bool chk = false;

        for (ll prime : primes)
        {
            if (s % prime == 0)
            {
                chk = true;

                break;
            }
        }

        if (chk == false)
        {
            println("YES");
        }
        else
        {
            println("NO");
        }
    }

    return 0;
}
