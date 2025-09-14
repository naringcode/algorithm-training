#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<char> stk;

string str;

int loopCnt = 0;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if (str.find('-') != string::npos)
            break;

        while (true)
        {
            auto pos = str.find("{}");
            if (pos == string::npos)
                break;

            str.erase(pos, 2);
        }

        loopCnt++;
        res = 0;

        stk.clear();
        stk.push_back('-');

        for (char ch : str)
        {
            if (stk.back() == '{' && ch == '}')
            {
                stk.pop_back();
            }
            else if (stk.back() == '{' && ch == '{')
            {
                stk.pop_back();

                res++;
            }
            else if (stk.back() == '-' && ch == '}')
            {
                stk.push_back('{');

                res++;
            }
            else
            {
                stk.push_back(ch);
            }
        }

        println("{}. {}", loopCnt, res);
    }

    return 0;
}
