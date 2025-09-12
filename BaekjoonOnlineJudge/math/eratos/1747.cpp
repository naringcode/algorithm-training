#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
bool primeTable[1'004'000];

vector<int> primes;

void goPrimes()
{
    ranges::fill(primeTable, true);
    primeTable[0] = false;
    primeTable[1] = false;

    for (int i = 2; i < ssize(primeTable); i++)
    {
        if (primeTable[i] == false)
            continue;

        for (int j = i * 2; j < ssize(primeTable); j += i)
        {
            primeTable[j] = false;
        }
    }

    for (int i = 0; i < ssize(primeTable); i++)
    {
        if (primeTable[i] == false)
            continue;

        string str = to_string(i);
        string revStr = str;

        ranges::reverse(revStr);

        if (str == revStr)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    goPrimes();

    cin >> n;

    auto iter = ranges::lower_bound(primes, n);

    println("{}", *iter);
    
    return 0;
}
