#include <bits/stdc++.h>

using namespace std;

int b;

string p;
string m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> b;

        if (0 == b)
            break;

        cin >> p >> m;

        int mod = 0;

        for (char ch : m)
        {
            mod = mod * b + (ch - '0');
        }

        int ret = 0;

        for (char ch : p)
        {
            ret = ret * b + (ch - '0');
            ret %= mod;
        }

        string str = "";

        while (0 != ret)
        {
            str.push_back((ret % b) + '0');
            ret /= b;
        }

        if (0 == str.length())
        {
            str = "0";
        }

        reverse(str.begin(), str.end());

        cout << str << '\n';
    }

    return 0;
}
