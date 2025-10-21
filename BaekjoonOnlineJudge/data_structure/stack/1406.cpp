#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
vector<char> stk;

int m;

char cmd;
char ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    cin >> m;
    
    while (m--)
    {
        cin >> cmd;

        if (cmd == 'L')
        {
            if (str.length() > 0)
            {
                stk.push_back(str.back());
                str.pop_back();
            }
        }
        else if (cmd == 'D')
        {
            if (stk.size() > 0)
            {
                str.push_back(stk.back());
                stk.pop_back();
            }
        }
        else if (cmd == 'B')
        {
            if (str.length() > 0)
            {
                str.pop_back();
            }
        }
        else if (cmd == 'P')
        {
            cin >> ch;

            str.push_back(ch);
        }
    }

    while (stk.size() > 0)
    {
        str.push_back(stk.back());
        stk.pop_back();
    }

    println("{}", str);

    return 0;
}
