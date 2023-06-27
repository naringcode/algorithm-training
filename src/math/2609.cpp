#include <bits/stdc++.h>

using namespace std;

int n1;
int n2;

int gcd(int a, int b)
{
    if (a == 0)
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

    cin >> n1 >> n2;

    cout << gcd(n1, n2) << '\n';
    cout << lcm(n1, n2);
    
    return 0;
}
