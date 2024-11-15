#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int a;
char ch;
int b;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    
    return gcd(y, x % y);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> ch >> b;

    int myGcd = gcd(a, b);

    cout << a / myGcd << ch << b / myGcd;

    return 0;
}
