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

        str[0] = std::toupper(str[0]);

        cout << str << '\n';
    }

    return 0;
}
