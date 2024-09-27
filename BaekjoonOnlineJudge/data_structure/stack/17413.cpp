#include <bits/stdc++.h>

using namespace std;

string str;

bool   flag;
string strStack;

string res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    for (char ch : str)
    {
        if (ch == '<')
        {
            reverse(strStack.begin(), strStack.end());

            res += strStack;
            strStack = "";
            
            flag = true;
            res += '<';

            continue;
        }
        else if (ch == '>')
        {
            flag = false;
            res += '>';

            continue;
        }

        if (flag == true)
        {
            res += ch;
        }
        else // if (flag == false)
        {
            if (ch == ' ')
            {
                reverse(strStack.begin(), strStack.end());

                res += strStack + ' ';
                strStack = "";
            }
            else
            {
                strStack += ch;
            }
        }
    }
    
    reverse(strStack.begin(), strStack.end());

    res += strStack;
    strStack = "";

    cout << res << '\n';

    return 0;
}
