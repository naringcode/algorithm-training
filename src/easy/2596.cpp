#include <bits/stdc++.h>

using namespace std;

const char codes[8][6]
{
    { '0', '0', '0', '0', '0', '0' }, // A
    { '0', '0', '1', '1', '1', '1' }, // B
    { '0', '1', '0', '0', '1', '1' }, // C
    { '0', '1', '1', '1', '0', '0' }, // D
    { '1', '0', '0', '1', '1', '0' }, // E
    { '1', '0', '1', '0', '0', '1' }, // F
    { '1', '1', '0', '1', '0', '1' }, // G
    { '1', '1', '1', '0', '1', '0' }  // H
};

int n;
string str;
char   ch[6];

string res;

char go()
{
    for (int code = 0; code < 8; code++)
    {
        int cnt = 0;

        for (int idx = 0; idx < 6; idx++)
        {
            if (0 != ch[idx] - codes[code][idx])
            {
                cnt++;
            }
        }

        if (cnt <= 1)
            return code + 'A';
    }

    return 'X';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    reverse(str.begin(), str.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            ch[j] = str.back();
            
            str.pop_back();
        }

        char temp = go();

        if ('X' == temp)
        {
            cout << i + 1;

            return 0;
        }

        res += temp;
    }

    cout << res;

    return 0;
}
