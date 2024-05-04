#include <bits/stdc++.h>

using namespace std;

string str;

// vector<string> res;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (getline(cin, str))
    {
        /*
        // res.emplace_back();
        res = "";

        for (int idx = 0; idx < str.length(); idx++)
        {
            if (idx + 3 <= str.length())
            {
                if (str[idx] == 'B' && str[idx + 1] == 'U' && str[idx + 2] == 'G')
                {
                    idx += 2;

                    continue;
                }
            }

            // res.back().push_back(str[idx]);
            res.push_back(str[idx]);
        }

        cout << res << '\n';
         */

        while (string::npos != str.find("BUG"))
        {
            str = regex_replace(str, regex("BUG"), "");
        }

        cout << str << '\n';
    }

    /*
    for (auto elem : res)
    {
        cout << elem << '\n';
    }
     */

    return 0;
}
