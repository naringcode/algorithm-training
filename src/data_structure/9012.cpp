#include <bits/stdc++.h>

using namespace std;

int    t;
string str;

vector<char> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> str;

        for (char ch : str)
        {
            if (')' == ch)
            {
                if (0 == vec.size())
                {
                    vec.push_back('x');

                    break;
                }

                vec.pop_back();
            }
            else
            {
                vec.push_back('(');
            }
        }
        
        if (vec.size())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }

        vec.clear();
    }

    
    return 0;
}
