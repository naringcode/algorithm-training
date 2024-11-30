#include <bits/stdc++.h>

using namespace std;

string str;

int pos;
int cnt;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        if ('X' == ch)
        {
            cnt++;
        }

        if (cnt == 4)
        {
            cnt -= 4;
            res += "AAAA";
        }

        if ('.' == ch)
        {
            if (cnt == 2)
            {
                cnt -= 2;
                res += "BB";
            }

            if (cnt > 0)
            {
                cout << -1;

                return 0;
            }

            res += ".";
        }
    }

    if (cnt == 2)
    {
        cnt -= 2;
        res += "BB";
    }

    if (cnt > 0)
    {
        cout << -1;

        return 0;
    }

    cout << res;

    return 0;
}
