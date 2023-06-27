#include <bits/stdc++.h>

using namespace std;

string str;

char prevCh[2];
int  cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if ("end" == str)
            break;

        cnt = 0;

        for (char ch : str)
        {
            if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
            {
                cnt++;
            }
        }

        if (cnt == 0)
            goto NO;
        
        prevCh[0] = '0';
        cnt = 0;

        for (char ch : str)
        {
            if ('a' == prevCh[0] || 'e' == prevCh[0] || 'i' == prevCh[0] || 'o' == prevCh[0] || 'u' == prevCh[0])
            {
                if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
                {
                    cnt++;
                }
                else
                {
                    prevCh[0] = ch;

                    cnt = 1;
                }
            }
            else
            {
                if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
                {
                    prevCh[0] = ch;

                    cnt = 1;
                }
                else
                {
                    cnt++;
                }
            }

            if (3 == cnt)
                goto NO;
        }

        prevCh[1] = str[0];

        for (int idx = 1; idx < str.length(); idx++)
        {
            prevCh[0] = prevCh[1];
            prevCh[1] = str[idx];

            if (prevCh[0] == prevCh[1])
            {
                if (prevCh[0] != 'e' && prevCh[0] != 'o')
                    goto NO;
            }
        }
        
        cout << '<' << str << "> is acceptable.\n";
        
        continue;

        NO:
        {
            cout << '<' << str << "> is not acceptable.\n";

            continue;
        }
    }

    return 0;
}