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

        if ("0" == str)
            break;

        rev = str;
        reverse(rev.begin(), rev.end());

        if (str == rev)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }

    return 0;
}
