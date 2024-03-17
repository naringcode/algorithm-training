#include <bits/stdc++.h>

using namespace std;

int n;

int go(int n)
{
    if (n <= 1)
        return 1;

    return n * go(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cout << go(n);

    return 0;
}