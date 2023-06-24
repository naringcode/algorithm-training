#include <bits/stdc++.h>

using namespace std;

int    n;
string str;

string prefix;
string subfix;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> str;

    int pos = str.find('*');

    prefix = str.substr(0, pos);
    subfix = str.substr(pos + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        // !!! 반례 !!!
        if (str.length() < prefix.length() + subfix.length())
        {
            cout << "NE" << '\n';

            continue;
        }

        if (prefix == str.substr(0, prefix.length()) &&
            subfix == str.substr(str.length() - subfix.length(), subfix.length()))
        {
            cout << "DA" << '\n';
        }
        else
        {
            cout << "NE" << '\n';
        }
    }

    return 0;
}
