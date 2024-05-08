#include <bits/stdc++.h>

using namespace std;

string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    res = "h";
    res += string(count(str.begin(), str.end(), 'e') * 2, 'e');
    res += "y";

    cout << res;

    return 0;
}
