#include <bits/stdc++.h>

using namespace std;

int n;
int p;

int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> p;

    res = p;

    if (n >= 5)
    {
        res = min(res, p - 500);
    }

    if (n >= 10)
    {
        res = min(res, p - (p / 10));
    }

    if (n >= 15)
    {
        res = min(res, p - 2000);
    }

    if (n >= 20)
    {
        res = min(res, p - (p / 4));
    }

    res = max(res, 0);

    cout << res;

    return 0;
}
