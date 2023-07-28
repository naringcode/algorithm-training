#include<bits/stdc++.h>

using namespace std;

long long n;

long long fibo(long long n)
{
    if (n < 2)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << ' ' << fibo(i) << '\n';
    // }

    cout << fibo(n);

    return 0;
}
