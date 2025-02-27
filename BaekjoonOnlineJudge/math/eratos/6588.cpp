#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

bool primesChe[1'000'004];
vector<int> primes;

int n;

void go()
{
    std::fill(primesChe, primesChe + 1'000'000, true);
    primesChe[0] = false;
    primesChe[1] = false;

    for (ll i = 2; i <= 1'000'000; i += 2)
    {
        primesChe[i] = false;
    }

    for (ll i = 3; i <= 1'000'000; i++)
    {
        if (primesChe[i] == false)
            continue;

        primes.push_back(i);

        for (ll j = i * i; j <= 1'000'000; j += i)
        {
            primesChe[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    go();

    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        auto primeView = primes | views::take_while([&](int elem) { 
            return n - elem >= elem; 
        });

        auto foundIter = ranges::find_if(primeView, [&](int x) 
        {
            int y = n - x;

            if (y % 2 == 0)
                return false;

            if (primesChe[y] == false)
                return false;

            if (n == x + y)
            {
                println("{} = {} + {}", n, x, y);

                return true;
            }

            return false;
        });

        if (foundIter == primeView.end())
        {
            println("Goldbach's conjecture is wrong.");
        }
    }

    return 0;
}
