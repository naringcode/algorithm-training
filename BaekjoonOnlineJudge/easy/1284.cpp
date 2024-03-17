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

        res = str.length() + 1;

        for (char ch : str)
        {
            if ('0' == ch)
            {
                res += 4;
            }
            else if ('1' == ch)
            {
                res += 2;
            }
            else
            {
                res += 3;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
