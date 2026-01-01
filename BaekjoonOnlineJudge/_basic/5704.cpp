#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        string str;
        getline(cin, str);

        if (str == "*")
            break;

        set<char> mySet;

        for (char ch : str)
        {
            if (ch == ' ')
                continue;

            mySet.insert(ch);
        }

        if (mySet.size() == 'z' - 'a' + 1)
        {
            println("Y");
        }
        else
        {
            println("N");
        }
    }

    return 0;
}
