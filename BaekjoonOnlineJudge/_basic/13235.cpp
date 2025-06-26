#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
string revStr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    revStr = str;
    ranges::reverse(revStr);

    for (int idx : views::iota(0, (int)(str.length() / 2)))
    {
        if (str[idx] != revStr[idx])
        {
            println("false");

            return 0;
        }
    }

    println("true");

    return 0;
}
