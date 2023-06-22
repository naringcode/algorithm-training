#include <bits/stdc++.h>

using namespace std;

set<string> mySet;

string str;

int res;

void calc(int idx, string calcStr)
{
    if (idx == str.length())
       return;

    calc(idx + 1, calcStr + str[idx + 1]);

    mySet.insert(calcStr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (int idx = 0; idx < str.length(); idx++)
    {
        calc(idx, {str[idx]});
    }

    cout << mySet.size();

    return 0;
}
