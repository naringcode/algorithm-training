#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
string chk;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    cin >> chk;

    str = ranges::to<string>(str | views::filter([](char ch) { return !(ch >= '0' && ch <= '9'); }));

    if (str.find(chk) != string::npos)
    {
        println("1");
    }
    else
    {
        println("0");
    }

    return 0;
}
