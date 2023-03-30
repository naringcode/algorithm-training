#include <bits/stdc++.h>

using namespace std;

int len;
char str[256];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> len >> str;

    for (int i = 0; i < len; i++)
    {
        res += (int)(str[i] - '0');
    }

    cout << res;

    return 0;
}
