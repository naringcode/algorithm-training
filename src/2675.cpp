#include <bits/stdc++.h>

using namespace std;

int t;
int r;

char str[256];
int  len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> r >> str;

        len = strlen(str);

        for (int j = 0; j < len; j++)
        {
            for (int k = 0; k < r; k++)
            {
                cout << str[j];
            }
        }

        cout << '\n';
    }

    return 0;
}
