#include <bits/stdc++.h>

using namespace std;

string str;
int stackV = 0;

char prevParen;
int  res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        if (ch == '(')
        {
            prevParen = '(';
            
            stackV++;
        }
        else // if (ch == ')')
        {
            if (prevParen == '(')
            {
                res += stackV - 1;
            }
            else
            {
                res++;
            }

            prevParen = ')';

            stackV--;
        }
    }

    cout << res;

    return 0;
}
