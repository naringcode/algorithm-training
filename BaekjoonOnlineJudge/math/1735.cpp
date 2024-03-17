#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;
int d;

int gcd(int a, int b)
{
    if (0 == a)
        return b;

    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;
    cin >> c >> d;
    
    int mm = lcm(b, d);

    a *= mm / b;
    c *= mm / d;

    a = a + c;
    b = mm;

    mm = gcd(a, b);

    cout << a / mm << ' ' << b / mm;

    return 0;
}
