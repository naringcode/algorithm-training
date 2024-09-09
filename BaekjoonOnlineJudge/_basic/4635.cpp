#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

int prv;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> t;

        if (-1 == t)
            break;

        prv = 0;
        res = 0;

        while (t--)
        {
            cin >> a >> b;

            res += a * (b - prv);

            prv = b;
        }

        cout << res << " miles\n";
    }

    return 0;
}
