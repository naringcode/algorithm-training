#include <bits/stdc++.h>

using namespace std;

int n;
int res;

int main()
{
    while (true)
    {
        cin >> n;
        
        if (n == 0)
            break;
            
        res = n * (n + 1) / 2;
        cout << res << '\n';
    }

    return 0;
}