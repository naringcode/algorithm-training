#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int a, b, c, d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        a = n / 25;
        n %= 25;
        
        b = n / 10;
        n %= 10;
        
        c = n / 5;
        n %= 5;
        
        d = n;

        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    }

    return 0;
}
