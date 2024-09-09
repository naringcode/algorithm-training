#include <bits/stdc++.h>

using namespace std;

int t;

string str;
int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str;

        a = (str[0] - 'A') * 26 * 26;
        a += (str[1] - 'A') * 26;
        a += (str[2] - 'A');

        b = (str[4] -'0') * 1000;
        b += (str[5] -'0') * 100;
        b += (str[6] -'0') * 10;
        b += (str[7] -'0');

        if (abs(a - b) <= 100)
        {
            cout << "nice\n";
        }
        else
        {
            cout << "not nice\n";
        }
    }

    return 0;
}
