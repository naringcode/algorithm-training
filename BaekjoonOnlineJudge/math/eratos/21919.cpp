#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool primes[1'000'004];

int n;
set<ll> nums;

ll res;

void prepare()
{
    ranges::fill(primes, true);
    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i * i <= 1'000'000; i++)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j <= 1'000'000; j += i)
            {
                primes[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    prepare();
    
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;

        if (primes[temp] == true)
        {
            nums.insert(temp);
        }
    }

    if (nums.empty())
    {
        res = -1;
    }
    else
    {
        res = 1;

        for (ll num : nums)
        {
            res *= num;
        }
    }

    println("{}", res);

    return 0;
}
