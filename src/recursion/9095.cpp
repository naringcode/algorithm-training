#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int go(int n, int val)
{
    n -= val;

    if (n < 0)
        return 0;

    else if (n == 0)
        return 1;

    return go(n, 1) + go(n, 2) + go(n, 3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        cout << go(n, 1) + go(n, 2) + go(n, 3) << '\n';
    }

    return 0;
}
