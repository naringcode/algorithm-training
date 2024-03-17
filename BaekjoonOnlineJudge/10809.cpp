#include <bits/stdc++.h>

using namespace std;

int numAlphabets[26];

char str[256];
int  len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(numAlphabets, -1, sizeof(numAlphabets));

    cin >> str;

    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (-1 == numAlphabets[str[i] - 'a'])
        {
            numAlphabets[str[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << numAlphabets[i] << ' ';
    }

    return 0;
}
