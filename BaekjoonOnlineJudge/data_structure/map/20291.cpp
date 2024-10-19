#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int t;
string str;

map<string, int> mp;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str;

        auto dotIdx = str.find('.') + 1;

        mp[str.substr(dotIdx)]++;
    }

    for (auto& pair : mp)
    {
        cout << pair.first << ' ' << pair.second << '\n';
    }

    return 0;
}
