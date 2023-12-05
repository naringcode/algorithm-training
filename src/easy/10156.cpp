#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    a *= b;

    a -= c;

    if (a < 0)
    {
        a = 0;
    }

    a = abs(a);

    cout << a;

    return 0;
}
