#include <bits/stdc++.h>

using namespace std;

string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        getline(cin, str);

        if ("#" == str)
            break;

        res = "";

        while (true)
        {
            size_t pos = str.find(' ');

            if (string::npos == pos)
                break;

            string temp = str.substr(0, pos);

            reverse(temp.begin(), temp.end());

            res += temp + ' ';
            str = str.substr(pos + 1);
        }

        reverse(str.begin(), str.end());

        res += str;

        cout << res << '\n';
    }

    return 0;
}
