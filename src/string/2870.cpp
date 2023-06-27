#include <bits/stdc++.h>

using namespace std;

int    n;
string str;

string         numStr;
vector<string> res;

bool comp(const string& lhs, const string& rhs)
{
    if (lhs.length() != rhs.length())
    {
        return lhs.length() < rhs.length();
    }

    return lhs < rhs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        for (char ch : str)
        {
            if (ch <= '9')
            {
                numStr += ch;
            }
            else
            {
                if (numStr.size())
                {
                    int idx = 0;
                    
                    while (true)
                    {
                        if ('0' != numStr[idx])
                            break;

                        idx++;
                    }

                    if ('\0' == numStr[idx])
                    {
                        res.push_back("0");
                    }
                    else
                    {
                        res.push_back(numStr.substr(idx));
                    }
                }

                numStr = "";
            }

        }

        if (numStr.size())
        {
            int idx = 0;
            
            while (true)
            {
                if ('0' != numStr[idx])
                    break;

                idx++;
            }

            if ('\0' == numStr[idx])
            {
                res.push_back("0");
            }
            else
            {
                res.push_back(numStr.substr(idx));
            }
        }

        numStr = "";
    }

    sort(res.begin(), res.end(), comp);

    for (auto& elem : res)
    {
        cout << elem << '\n';
    }
    
    return 0;
}
