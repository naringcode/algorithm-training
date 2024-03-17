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
        getline(cin, str);

        if ("#" == str)
            break;

        res = 0;

        for (char ch : str)
        {
            if (ch < 'a')
            {
                ch += 'a' - 'A';
            }

            if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
            {
                res++;
            }
        }

        cout << res << '\n';
    }

    
    return 0;
}