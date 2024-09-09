#include <bits/stdc++.h>

using namespace std;

int n;
int a;
int b;

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
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        cout << lcm(a, b) << ' ' << gcd(a, b)  << '\n';
    }

    return 0;
}
