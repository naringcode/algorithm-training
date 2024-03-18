#include <bits/stdc++.h>

using namespace std;

using Type = long long;

Type memo[204];

Type n;

Type fibo(Type n)
{
    if (0 != memo[n])
        return memo[n];

    if (n <= 0)
        return 0;

    if (1 == n || 2 == n)
        return memo[n] = 1;

    return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n;

    cout << fibo(n);

    return 0;
}
