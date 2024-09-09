#include <bits/stdc++.h>

using namespace std;

string strA;
char   op;
string strB;

bool carry;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> op >> strB;

    if ('+' == op)
    {
        if (strA == strB)
        {
            res = string(strA.length(), '0');
            res[0] = '2';
        }
        else
        {
            res = string(max(strA.length(), strB.length()), '0');

            res[0] = '1';
            res[res.length() - min(strA.length(), strB.length())] = '1';
        }
    }
    else if ('*' == op)
    {
        res = strA;

        res += string(strB.length() - 1, '0');
    }

    cout << res;

    return 0;
}
