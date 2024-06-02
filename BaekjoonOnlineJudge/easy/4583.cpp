#include <bits/stdc++.h>

using namespace std;

string str;
string rev;

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

        rev = "";

        for (char ch : str)
        {
            if ('b' == ch)
            {
                rev.push_back('d');
            }
            else if ('d' == ch)
            {
                rev.push_back('b');
            }
            else if ('p' == ch)
            {
                rev.push_back('q');
            }
            else if ('q' == ch)
            {
                rev.push_back('p');
            }
            else if ('i' == ch || 'o' == ch || 'v' == ch || 'w' == ch || 'x' == ch)
            {
                rev.push_back(ch);
            }
        }

        if (str.length() == rev.length())
        {
            reverse(rev.begin(), rev.end());

            cout << rev << '\n';
        }
        else
        {
            cout << "INVALID\n";
        }
    }

    return 0;
}
