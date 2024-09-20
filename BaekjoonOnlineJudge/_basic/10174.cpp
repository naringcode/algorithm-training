#include <bits/stdc++.h>

using namespace std;

int n;
string str;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin.ignore();

    while (n--)
    {
        getline(cin, str);

        for (char& ch : str)
        {
            if ('A' <= ch && 'Z' >= ch)
            {
                ch = ch + ('a' - 'A');
            }
        }

        string rev = str;
        reverse(rev.begin(), rev.end());

        if (rev == str)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
