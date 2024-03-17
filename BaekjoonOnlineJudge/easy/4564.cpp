#include <bits/stdc++.h>

using namespace std;

string str;

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

        if (1 != str.size())
        {
            cout << str << ' ';
        }

        while (true)
        {
            int res = 1;

            for (char ch : str)
            {
                ch -= '0';

                res *= ch;
            }

            str = to_string(res);

            cout << str << ' ';

            if (1 == str.size())
                break;
        }

        cout << '\n';
    }

    return 0;
}
