#include <bits/stdc++.h>

using namespace std;

using ll = long long;

unsigned long long n;
unsigned long long res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    res = (unsigned long long)sqrt(n);

    if (res * res < n)
    {
        res++;
    }

    cout << res;
    
    return 0;
}
