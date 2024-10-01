#include <bits/stdc++.h>

using namespace std;

string str;

vector<char> chStk;

int temp;
int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    // 분배법칙으로 적용될 값을 미리 계산하는 것이 핵심
    temp = 1;

    for (int idx = 0; idx < str.length(); idx++)
    {
        char ch = str[idx];

        if ('(' == ch)
        {
            temp *= 2;

            chStk.push_back(ch);
        }
        else if ('[' == ch)
        {
            temp *= 3;

            chStk.push_back(ch);
        }
        else if (')' == ch)
        {
            if (0 == chStk.size() || '(' != chStk.back())
            {
                chStk.push_back('x');

                break;
            }

            if (str[idx - 1] == '(')
            {
                res += temp;
                temp /= 2;

                chStk.pop_back();
            }
            else
            {
                temp /= 2;
                chStk.pop_back();
            }
        }
        else if (']' == ch)
        {
            if (0 == chStk.size() || '[' != chStk.back())
            {
                chStk.push_back('x');

                break;
            }
            
            if (str[idx - 1] == '[')
            {
                res += temp;
                temp /= 3;

                chStk.pop_back();
            }
            else
            {
                temp /= 3;
                chStk.pop_back();
            }
        }
    }

    if (chStk.size() > 0)
    {
        cout << 0;
    }
    else
    {
        cout << res;
    }

    return 0;
}
