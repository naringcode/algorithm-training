#include <bits/stdc++.h>

using namespace std;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    n %= 8;

    if (6 == n)
    {
        res = 4;
    }
    else if (7 == n)
    {
        res = 3;
    }
    else if (0 == n)
    {
        res = 2;
    }
    else
    {
        res = n;
    }

    cout << res;

    return 0;
}
