#include <bits/stdc++.h>

using namespace std;

string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    for (int idx = 0; idx < str.length(); idx++)
    {
        char ch = str[idx];

        if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
        {
            idx += 2;
        }

        res.push_back(ch);
    }

    cout << res;

    return 0;
}
