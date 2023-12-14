#include <bits/stdc++.h>

using namespace std;

string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        res *= 16;

        if (ch >= 'A' && ch <= 'F')
        {
            ch -= 'A';
            ch += 10;
        }
        else
        {
            ch -= '0';
        }

        res += ch;
    }

    cout << res;

    return 0;
}
