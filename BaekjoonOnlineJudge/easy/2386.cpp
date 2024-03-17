#include <bits/stdc++.h>

using namespace std;

char ch;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> ch;

        if ('#' == ch)
            break;

        cin.ignore();
        getline(cin, str);

        transform(str.begin(), str.end(), str.begin(), ::tolower);

        for (char elem : str)
        {
            if (elem == ch)
            {
                res++;
            }
        }

        cout << ch << ' ' << res << '\n';

        res = 0;
    }

    return 0;
}
