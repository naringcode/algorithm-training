#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string s;
string k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s;
    cin >> k;

    s = ranges::to<string>(s | views::filter([](char ch) { return !(ch >= '0' && ch <= '9'); }));

    if (s.find(k) != string::npos)
    {
        println("1");
    }
    else
    {
        println("0");
    }

    return 0;
}
