#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
int chCnts[26];

bool res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        memset(chCnts, 0x00, sizeof(chCnts));

        res = true;

        for (int idx = 0; idx < str.length(); idx++)
        {
            int chIdx = str[idx] - 'A';

            chCnts[chIdx]++;

            if (chCnts[chIdx] == 3)
            {
                if (idx + 1 >= ssize(str) || str[idx] != str[idx + 1])
                {
                    res = false;

                    break;
                }

                chCnts[chIdx] = 0;
                idx++;
            }
        }

        if (res == true)
        {
            println("OK");
        }
        else
        {
            println("FAKE");
        }
    }

    return 0;
}
