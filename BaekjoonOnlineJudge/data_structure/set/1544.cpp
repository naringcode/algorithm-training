#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;

set<string> mySet;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;
        
        int len = str.length();
        str += str;

        bool flag = true;

        for (int i : views::iota(0, len))
        {
            if (mySet.contains(str.substr(i, len)))
            {
                flag = false;

                break;
            }
        }

        if (flag == true)
        {
            mySet.insert(str.substr(0, len));
        }
    }

    println("{}", mySet.size());

    return 0;
}
