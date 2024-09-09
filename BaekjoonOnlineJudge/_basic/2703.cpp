#include <bits/stdc++.h>

using namespace std;

int n;

string str;
char arr[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, str);

        for (int j = 0; j < 26; j++)
        {
            cin >> arr[j];
        }

        for (char& ch : str)
        {
            if (' ' == ch)
                continue;

            ch = arr[ch - 'A'];
        }

        cout << str << '\n';
    }

    return 0;
}