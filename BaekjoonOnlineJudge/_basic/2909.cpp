#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int c;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> c >> k;

    if (k == 0)
    {
        println("{}", c);

        return 0;
    }

    if (k > 1)
    {
        c /= pow(10, k - 1);
    }

    if (c % 10 >= 5)
    {
        c += 10 - (c % 10);
    }
    else
    {
        c -= c % 10;
    }
    
    if (k > 1)
    {
        c *= pow(10, k - 1);
    }

    println("{}", c);

    return 0;
}
