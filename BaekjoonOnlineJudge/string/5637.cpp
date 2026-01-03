#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;
        if (str == "E-N-D")
            break;

        str = ranges::to<string>(str | views::filter([](char ch) {
            return ch == '-' || (ch >= 'a' && ch < 'z') || (ch >= 'A' && ch <= 'Z');
        }));

        if (res.length() < str.length())
        {
            res = str;
        }
    }

    transform(res.begin(), res.end(), res.begin(), ::tolower);

    println("{}", res);

    return 0;
}
