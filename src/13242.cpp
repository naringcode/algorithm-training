#include <bits/stdc++.h>

using namespace std;

long long a;
long long b;

long long gcd(long long a, long long b)
{
    if (0LL == b)
        return a;

    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    cout << lcm(a, b) << '\n';

    return 0;
}
