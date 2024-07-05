#include <bits/stdc++.h>

using namespace std;

int n;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin.ignore();

    while (n--)
    {
        getline(cin, str);

        stringstream ss{ str };

        while (getline(ss, str, ' '))
        {
            reverse(str.begin(), str.end());

            cout << str << ' ';
        }

        cout << '\n';
    }

    return 0;
}
