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
        ch -= 'A';

        ch = (ch + 23) % 26;

        ch += 'A';
    }

    cout << str;

    return 0;
}
