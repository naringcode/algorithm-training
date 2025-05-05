#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> primes;
vector<int> res;

int main()
{
    cin >> n;

    for (int i = 2; i <= 1000; i++)
    {
        bool flag = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;

                break;
            }
        }

        if (flag == true)
        {
            primes.push_back(i);
        }
    }

    res.resize(primes.size());

    for (int elem : views::iota(2, n + 1))
    {
        for (int i : views::iota(0, ssize(primes)))
        {
            while (elem % primes[i] == 0)
            {
                elem /= primes[i];
                res[i]++;
            }

            if (elem == 1)
                break;
        }
    }

    while (res.back() == 0)
    {
        res.pop_back();
    }

    print("{}! = ", n);

    for (int elem : res)
    {
        print("{} ", elem);
    }

    return 0;
}
