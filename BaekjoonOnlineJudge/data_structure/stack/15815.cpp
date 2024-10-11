#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;

vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    
    for (char ch : str)
    {
        if (ch >= '0' && ch <= '9')
        {
            vec.push_back(ch - '0');
        }
        else
        {
            int tempR = vec.back();
            vec.pop_back();
            
            int tempL = vec.back();
            vec.pop_back();

            int res;

            if ('+' == ch)
            {
                res = tempL + tempR;
            }
            else if ('-' == ch)
            {
                res = tempL - tempR;
            }
            else if ('*' == ch)
            {
                res = tempL * tempR;
            }
            else if ('/' == ch)
            {
                res = tempL / tempR;
            }

            vec.push_back(res);
        }
    }

    cout << vec.back();

    return 0;
}
