#include <bits/stdc++.h>

using namespace std;

int t;

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    return gcd(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;
        int numSqrt;
        int res = 1;

        cin >> num;

        numSqrt = sqrt(num);

        for (int j = 2; j <= numSqrt; j++)
        {
            if (0 != num % j)
                continue;

            if (1 != gcd(num / j, j))
                continue;

            res++;
        }

        cout << res << '\n';
    }

    return 0;
}
