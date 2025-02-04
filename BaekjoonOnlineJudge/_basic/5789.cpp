#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str;

        int halfLen = str.length() / 2;

        if (str[halfLen - 1] == str[halfLen])
        {
            cout << "Do-it\n";
        }
        else
        {
            cout << "Do-it-Not\n";
        }
    }

    return 0;
}
