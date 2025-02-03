#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    a += b;

    while (a >= c)
    {
        int refill    = a / c;
        int remaining = a % c;

        a = refill + remaining;

        res += refill;
    }

    cout << res;

    return 0;
}
