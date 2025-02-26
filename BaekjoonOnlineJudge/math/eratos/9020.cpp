#include <bits/stdc++.h>
#include <print>

using namespace std;

using ll = long long;

bool primes[10004];
map<int, pair<int, int>> mp;

int t;
int n;

void go()
{
    std::fill(primes, primes + 10000, true);
    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i <= 10000; i++)
    {
        if (primes[i] == false)
            continue;

        for (int j = i * i; j <= 10000; j += i)
        {
            primes[j] = false;
        }
    }

    for (int i = 2; i <= 10000; i++)
    {   
        if (primes[i] == false)
            continue;

        for (int j = i; j <= 10000 - i; j++)
        {
            if (primes[j] == false)
                continue;

            if ((i + j) % 2 != 0)
                continue;

            mp[i + j] = { i, j };
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    go();

    cin >> t;

    while (t--)
    {
        cin >> n;

        auto [x, y] = mp[n];

        println(cout, "{} {}", x, y);
    }

    return 0;
}
