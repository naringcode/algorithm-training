#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;
string res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    res.resize(str.length());
    fill(res.begin(), res.end(), 'z');

    for (int i = 1; i < str.length(); i++)
    {
        for (int j = 1; j < str.length() - i; j++)
        {
            string strA = str.substr(0, i);
            string strB = str.substr(i, j);
            string strC = str.substr(i + j);

            reverse(strA.begin(), strA.end());
            reverse(strB.begin(), strB.end());
            reverse(strC.begin(), strC.end());

            strA += strB + strC;

            if (res > strA)
            {
                res = strA;
            }
        }
    }

    cout << res;

    return 0;
}
