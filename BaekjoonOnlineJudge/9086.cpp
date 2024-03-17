#include <bits/stdc++.h>

using namespace std;

char str[256];
int t;

int len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str;

        len = strlen(str);

        cout << str[0] << str[len - 1] << '\n';
    }

    return 0;
}
