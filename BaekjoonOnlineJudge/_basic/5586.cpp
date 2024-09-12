#include <bits/stdc++.h>

using namespace std;

string str;

int res1;
int res2;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (int idx = 0; idx < str.length() - 2; idx++)
    {
        if ('J' == str[idx] && 'O' == str[idx + 1] && 'I' == str[idx + 2])
        {
            res1++;
        }
        else if ('I' == str[idx] && 'O' == str[idx + 1] && 'I' == str[idx + 2])
        {
            res2++;
        }
    }

    cout << res1 << '\n' << res2;

    return 0;
}
