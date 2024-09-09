#include <bits/stdc++.h>

using namespace std;

const vector<string> table{ "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };

string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    stringstream ss{ str };

    while (getline(ss, str, ' '))
    {
        if (res.size() == 0)
        {
            res.push_back(toupper(str[0]));

            continue;
        }

        auto iter = find(table.begin(), table.end(), str);

        if (iter == table.end())
        {
            res.push_back(toupper(str[0]));
        }
    }

    cout << res;

    return 0;
}
