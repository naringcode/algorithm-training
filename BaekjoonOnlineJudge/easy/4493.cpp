#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int res1;
int res2;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        res1 = 0;
        res2 = 0;

        cin >> n;

        while (n--)
        {
            char ch1;
            char ch2;

            cin >> ch1 >> ch2;

            if (ch1 == ch2)
                continue;

            if ('R' == ch1)
            {
                if ('P' == ch2)
                {
                    res2++;
                }
                else if ('S' == ch2)
                {
                    res1++;
                }
            }
            else if ('P' == ch1)
            {
                if ('R' == ch2)
                {
                    res1++;
                }
                else if ('S' == ch2)
                {
                    res2++;
                }
            }
            else if ('S' == ch1)
            {
                if ('R' == ch2)
                {
                    res2++;
                }
                else if ('P' == ch2)
                {
                    res1++;
                }
            }
        }

        if (res1 > res2)
        {
            cout << "Player 1\n";
        }
        else if (res1 < res2)
        {
            cout << "Player 2\n";
        }
        else
        {
            cout << "TIE\n";
        }
    }

    return 0;
}
