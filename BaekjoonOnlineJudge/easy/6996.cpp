#include <bits/stdc++.h>

using namespace std;

int t;

string strA;
string strB;

int cntA[26];
int cntB[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> strA >> strB;

        memset(cntA, 0x00, sizeof(cntA));
        memset(cntB, 0x00, sizeof(cntB));

        for (char ch : strA)
        {
            cntA[ch - 'a']++;
        }

        for (char ch : strB)
        {
            cntB[ch - 'a']++;
        }

        bool chk = true;

        for (int i = 0; i < 26; i++)
        {
            if (cntA[i] != cntB[i])
            {
                chk = false;

                break;
            }
        }

        strA += " & ";
        strA += strB;

        if (true == chk)
        {
            strA += " are anagrams.";
        }
        else
        {
            strA += " are NOT anagrams.";
        }

        cout << strA << '\n';
    }

    return 0;
}
