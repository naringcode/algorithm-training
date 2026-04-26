#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> a >> b >> c;

        if (0 == a && 0 == b && 0 == c)
            break;

        a *= a;
        b *= b;
        c *= c;

        if (a == b + c || b == a + c || c == a + b)
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }

    return 0;
}
