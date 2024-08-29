#include <bits/stdc++.h>

using namespace std;

string str;
int base = 10;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    if ('0' == str[0])
    {
        if ('x' == str[1])
        {
            base = 16;
        }
        else
        {
            base = 8;
        }
    }

    cout << stoi(str, nullptr, base);

    return 0;
}
