#include <bits/stdc++.h>

using namespace std;

int a;
int b;

char ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> a >> ch >> b;

        if (0 == a && 'W' == ch && 0 == b)
            break;

        if ('W' == ch)
        {
            a -= b;
        }
        else // if ('D' == ch)
        {
            a += b;
        }

        if (a < -200)
        {
            cout << "Not allowed" << '\n';
        }
        else
        {
            cout << a << '\n';
        }
    }

    return 0;
}
