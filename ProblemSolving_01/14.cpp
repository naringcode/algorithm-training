#include <bits/stdc++.h>

using namespace std;

int n;
int x;

int reverse(int x)
{
    int ret = 0;

    while (x > 0)
    {
        ret *= 10;

        ret += x % 10;
        x /= 10;
    }

    return ret;
}

bool isPrime(int x)
{
    if (x <= 1)
        return false;

    if (2 == x)
        return true;
        
    for (int i = 2; i * i <= x; i++)
    {
        if (0 == x % i)
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

    while (n--)
    {
        cin >> x;

        x = reverse(x);

        if (isPrime(x))
        {
            cout << x << ' ';
        }
    }

    return 0;
}
