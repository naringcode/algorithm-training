#include <bits/stdc++.h>

using namespace std;

int n;

int res = 99;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n < 100)
    {
        cout << n;

        return 0;
    }
    
    for (int i = 100; i <= n; i++)
    {
        int digit100 = i / 100;
        int digit10  = (i / 10) % 10;
        int digit1   = i % 10;

        if (digit100 - digit10 == digit10 - digit1)
        {
            res++;
        }
    }

    cout << res;

    return 0;
}