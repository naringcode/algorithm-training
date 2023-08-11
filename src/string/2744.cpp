#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char& ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 'a' - 'A';
        }
        else
        {
            ch -= 'a' - 'A';
        }
    }

    cout << str;

    return 0;
}
