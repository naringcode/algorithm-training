#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

vector<char> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        getline(cin, str);

        if ("." == str)
            break;

        for (char ch : str)
        {
            switch (ch)
            {
                case '(':
                case '[':
                {
                    vec.push_back(ch);

                    break;
                }

                case ')':
                case ']':
                {
                    if (0 == vec.size())
                    {
                        vec.push_back('x');
                        
                        goto BREAK;
                    }

                    if (('[' == vec.back() && ']' == ch) || ('(' == vec.back() && ')' == ch))
                    {
                        vec.pop_back();
                    }
                    else
                    {
                        vec.push_back('x');

                        goto BREAK;
                    }
                }
            }
        }

        BREAK:

        if (vec.size())
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }

        vec.clear();
    }
    
    return 0;
}
