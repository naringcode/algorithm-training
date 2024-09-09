#include <bits/stdc++.h>

using namespace std;

int  num;

char prevOpCode = '+';
char nextOpCode;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    while (true)
    {
        cin >> num >> nextOpCode;

        if ('+' == prevOpCode)
        {
            res += num;
        }
        else if ('-' == prevOpCode)
        {
            res -= num;
        }
        else if ('*' == prevOpCode)
        {
            res *= num;
        }
        else if ('/' == prevOpCode)
        {
            res /= num;
        }

        prevOpCode = nextOpCode;

        if ('=' == prevOpCode)
            break;
    }

    cout << res;

    return 0;
}
