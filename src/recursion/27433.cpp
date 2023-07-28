#include<bits/stdc++.h>

using namespace std;

long long n;

long long facto(long long n)
{
    if (1 >= n)
        return 1;

    return n * facto(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cout << facto(n);

    return 0;
}
