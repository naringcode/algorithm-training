#include <bits/stdc++.h>

using namespace std;

bool alphabetChks[26];
char continousCh;

int n;

string str;
int    res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        // init
        memset(alphabetChks, 0x00, sizeof(alphabetChks));
        continousCh = '0';

        cin >> str;

        for (char ch : str)
        {
            if (ch == continousCh)
                continue;

            int idx = ch - 'a';

            if (true == alphabetChks[idx])
            {
                continousCh = '0';

                break;
            }

            alphabetChks[idx] = true;

            continousCh = ch;
        }

        if ('0' != continousCh)
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
