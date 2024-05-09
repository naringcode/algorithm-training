#include <bits/stdc++.h>

using namespace std;

constexpr int pattern[5] = {
    1,
    2,
    6,
    24,
    120
};

string str;
int    res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if ("0" == str)
            break;

        res = 0;

        for (int idx = 0; idx < str.length(); idx++)
        {
            res += (str[idx] - '0') * pattern[(str.length() - idx) - 1];
        }

        cout << res << '\n';
    }

    return 0;
}
