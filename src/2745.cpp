#include <bits/stdc++.h>

using namespace std;

string str;
int notation;

int mul = 1;
int temp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str >> notation;

    for (int i = 0; i < str.length(); i++)
    {
        int idx = str.length() - i - 1;

        char ch = str[idx];

        if (ch < 'A')
        {
            temp = ch - '0';
        }
        else
        {
            temp = ch - 'A' + 10;
        }

        temp *= mul;

        res += temp;

        mul *= notation;
    }

    cout << res;

    return 0;
}
