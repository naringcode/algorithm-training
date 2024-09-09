#include <bits/stdc++.h>

using namespace std;

string str;
int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if ("#" == str)
            break;

        reverse(str.begin(), str.end());

        int op = 1;
        res = 0;

        for (char ch : str)
        {
            int val;

            if ('-' == ch)
            {
                val = 0;
            }
            else if ('\\' == ch)
            {
                val = 1;
            }
            else if ('(' == ch)
            {
                val = 2;
            }
            else if ('@' == ch)
            {
                val = 3;
            }
            else if ('?' == ch)
            {
                val = 4;
            }
            else if ('>' == ch)
            {
                val = 5;
            }
            else if ('&' == ch)
            {
                val = 6;
            }
            else if ('%' == ch)
            {
                val = 7;
            }
            else if ('/' == ch)
            {
                val = -1;
            }

            res += val * op;
            op *= 8;
        }

        cout << res << '\n';
    }

    return 0;
}
