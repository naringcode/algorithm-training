#include <bits/stdc++.h>

using namespace std;

using ll = long long;

char table[]{ 
    '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
    'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
    'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
    'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'
};

string str;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (getline(cin, str))
    {
        for (char ch : str)
        {
            if (ch == ' ')
            {
                res += ch;
    
                continue;
            }
    
            auto iter = ranges::find(table, ch);
    
            if (iter != std::end(table))
            {
                iter--;
    
                res += *iter;
            }
        }

        res += '\n';
    }

    println("{}", res);

    return 0;
}
