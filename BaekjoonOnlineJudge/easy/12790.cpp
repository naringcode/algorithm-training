#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;
int c;
int d;

int aa;
int bb;
int cc;
int dd;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        cin >> aa >> bb >> cc >> dd;

        a += aa;
        b += bb;
        c += cc;
        d += dd;

        a = max(1, a);
        b = max(1, b);
        c = max(0, c);

        res = a + 5 * b + 2 * c + 2 * d;

        cout << res << '\n';
    }

    return 0;
}
