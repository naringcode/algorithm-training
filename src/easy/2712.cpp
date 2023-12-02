#include <bits/stdc++.h>

using namespace std;

int n;

double val;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val >> str;

        if ("kg" == str)
        {
            val *= 2.2046 / 1.000;

            str = " lb";
        }
        else if ("lb" == str)
        {
            val *= 0.4536 / 1.000;

            str = " kg";
        }
        else if ("l" == str)
        {
            val *= 0.2642 / 1.000;

            str = " g";
        }
        else if ("g" == str)
        {
            val *= 3.7854 / 1.000;

            str = " l";
        }

        cout.precision(4);

        cout << fixed << val << str << '\n';
    }

    return 0;
}