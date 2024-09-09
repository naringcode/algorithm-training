#include <bits/stdc++.h>

using namespace std;

int t;

string str;

double num;
char   ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    cin.ignore();

    while (t--)
    {
        getline(cin, str);

        stringstream ss{ str };

        ss >> num;

        while (ss >> ch)
        {
            if ('@' == ch)
            {
                num *= 3.0;
            }
            else if ('%' == ch)
            {
                num += 5.0;
            }
            else if ('#' == ch)
            {
                num -= 7.0;
            }
        }

        cout.precision(2);
        cout << fixed << num << '\n';
    }

    return 0;
}
