#include <bits/stdc++.h>

using namespace std;

string str;

double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;
        
        if ("EOI" == str)
            break;

        if ("Paper" == str)
        {
            res += 57.99;
        }
        else if ("Printer" == str)
        {
            res += 120.50;
        }
        else if ("Planners" == str)
        {
            res += 31.25;
        }
        else if ("Binders" == str)
        {
            res += 22.50;
        }
        else if ("Calendar" == str)
        {
            res += 10.95;
        }
        else if ("Notebooks" == str)
        {
            res += 11.20;
        }
        else if ("Ink" == str)
        {
            res += 66.95;
        }
    }

    cout.precision(2);

    cout << fixed << "$" << res;

    return 0;
}
