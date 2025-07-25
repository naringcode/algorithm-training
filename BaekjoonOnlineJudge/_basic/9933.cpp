#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

vector<string> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        vec.push_back(str);
    }

    for (string revStr : vec | views::transform([](string str) { ranges::reverse(str); return str; }))
    {
        auto temp = ranges::count(vec, revStr);
        if (temp != 0)
        {
            println("{} {}", revStr.length(), revStr[revStr.length() / 2]);

            return 0;
        }
    }

    return 0;
}
