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

    for (int i : views::iota(0, n))
    {
        cin >> str;

        if (str.length() < 6)
            continue;

        int frontIdx = str.length() - 6;

        if (str[frontIdx + 0] == 'C' && str[frontIdx + 1] == 'h' &&
            str[frontIdx + 2] == 'e' && str[frontIdx + 3] == 'e' &&
            str[frontIdx + 4] == 's' && str[frontIdx + 5] == 'e')
        {
            mySet.insert(str);
        }
    }

    if (mySet.size() >= 4)
    {
        println("yummy");
    }
    else
    {
        println("sad");
    }

    return 0;
}
