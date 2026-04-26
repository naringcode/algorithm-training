#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

int gcd(int a, int b)
{
    if (0 == b)
        return a;

    return gcd(b, a % b);
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

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        cout << lcm(a, b) << '\n';
    }

    return 0;
}
