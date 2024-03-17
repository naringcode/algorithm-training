#include <bits/stdc++.h>

using namespace std;

string str;

vector<char> opVec;

vector<char> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    
    // 우선 순위
    // 1 : (, )
    // 2 : *, /
    // 3 : +, -
    //
    // 어떤 조건을 충족했을 때 pop하는 것이 핵심인 것 같은데
    for (char ch : str)
    {
        if ('A' <= ch && ch <= 'Z')
        {
            res.push_back(ch);

            continue;
        }

        if ('(' == ch)
        {
            opVec.push_back(ch);
        }
        else if (')' == ch)
        {
            vector<char> temp;
            
            while ('(' != opVec.back())
            {
                temp.push_back(opVec.back());
                opVec.pop_back();
            }

            for (char ch : temp)
            {
                res.push_back(ch);
            }

            opVec.pop_back(); // '(' 제거
        }
        else if ('*' == ch || '/' == ch)
        {
            vector<char> temp;

            while (opVec.size() && '(' != opVec.back() && '+' != opVec.back() && '-' != opVec.back())
            {
                temp.push_back(opVec.back());
                opVec.pop_back();
            }
            
            for (char ch : temp)
            {
                res.push_back(ch);
            }

            opVec.push_back(ch);
        }
        else if ('+' == ch || '-' == ch)
        {
            vector<char> temp;
            
            while (opVec.size() && '(' != opVec.back())
            {
                temp.push_back(opVec.back());
                opVec.pop_back();
            }
            
            for (char ch : temp)
            {
                res.push_back(ch);
            }

            opVec.push_back(ch);
        }
    }

    while (opVec.size())
    {
        res.push_back(opVec.back());

        opVec.pop_back();
    }

    res.push_back('\0');

    cout << res.data() << '\n';

    return 0;
}