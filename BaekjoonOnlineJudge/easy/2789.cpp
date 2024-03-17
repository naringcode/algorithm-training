#include <bits/stdc++.h>

using namespace std;

string hint = "CAMBRIDGE";
string str;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (const char& ch : str)
    {
        int cnt = count_if(hint.begin(), hint.end(), [ch](char h) {
            return h == ch;
        });

        if (0 == cnt)
        {
            res.push_back(ch);
        }
    }

    cout << res;

    return 0;
}
