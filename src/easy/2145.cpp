#include <bits/stdc++.h>

using namespace std;

string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if ("0" == str)
            break;

        while (str.length() > 1)
        {
            res = 0;

            for (char ch : str)
            {
                res += ch - '0';
            }

            str = to_string(res);
        }

        cout << str << '\n';
    }

    return 0;
}