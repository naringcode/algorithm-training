#include <bits/stdc++.h>

using namespace std;

int t;

string  funcStr;
string  numStr;
int     n;

deque<int> dq;

bool mode;

bool flag;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        mode = true;

        flag = false;

        cin >> funcStr;

        cin >> n;
        cin >> numStr;

        n = 0;

        if (numStr.length() > 2)
        {
            for (char ch : numStr)
            {
                if ('[' == ch)
                    continue;

                if (',' == ch || ']' == ch)
                {
                    dq.push_back(n);

                    n = 0;

                    continue;
                }

                n *= 10;
                n += ch - '0';
            }
        }

        for (char ch : funcStr)
        {
            if ('R' == ch)
            {
                mode = !mode;

                continue;
            }

            if (0 == dq.size())
            {
                flag = true;

                break;
            }

            if (true == mode)
            {
                dq.pop_front();
            }
            else
            {
                dq.pop_back();
            }
        }

        if (false == flag)
        {
            cout << '[';        

            if (true == mode)
            {
                while (dq.size())
                {
                    cout << dq.front();

                    if (dq.size() > 1)
                    {
                        cout << ',';
                    }

                    dq.pop_front();
                }
            }
            else
            {
                while (dq.size())
                {
                    cout << dq.back();

                    if (dq.size() > 1)
                    {
                        cout << ',';
                    }

                    dq.pop_back();
                }
            }

            cout << "]\n";
        }
        else
        {
            cout << "error\n";
        }
    }

    return 0;
}