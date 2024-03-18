#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int go(int n)
{
    if (0 == n)
        return 1;

    if (n < 0)
        return 0;

    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        res += go(n - i);
    }

    return res;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n;

    cout << go(n);

    return 0;
}
