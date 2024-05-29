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

        if ("#" == str)
            break;

        int cnt = count(str.begin(), str.end(), '1');

        if ('e' == str.back())
        {
            if (0 == cnt % 2)
            {
                str.back() = '0';
            }
            else
            {
                str.back() = '1';
            }
        }
        else if ('o' == str.back())
        {
            if (0 == cnt % 2)
            {
                str.back() = '1';
            }
            else
            {
                str.back() = '0';
            }
        }

        cout << str << '\n';
    }

    return 0;
}
