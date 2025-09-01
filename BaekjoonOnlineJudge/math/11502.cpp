#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int num;

vector<int> primes;

bool IsPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    
    return true;
}

void go()
{
    cin >> num;

    for (int i : views::iota(0, ssize(primes)))
    {
        for (int j : views::iota(i, ssize(primes)))
        {
            for (int k : views::iota(j, ssize(primes)))
            {
                if (primes[i] + primes[j] + primes[k] == num)
                {
                    println("{} {} {}", primes[i], primes[j], primes[k]);

                    return;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(2, 1000))
    {
        if (IsPrime(i) == true)
        {
            primes.push_back(i);
        }
    }

    cin >> t;

    while (t--)
    {
        go();
    }

    return 0;
}
