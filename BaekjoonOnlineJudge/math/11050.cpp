#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = n - k + 1; i <= n; i++)
    {
        res *= i;
    }

    for (int i = 2; i <= k; i++)
    {
        res /= i;
    }

    cout << res;

    return 0;
}
