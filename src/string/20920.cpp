#include <bits/stdc++.h>

using namespace std;

int n;
int m;

map<string, int> mp;
string str;

vector<string> res;

struct Comp
{
    bool operator()(const string& lhs, const string& rhs) const
    {
        if (mp[lhs] != mp[rhs])
            return mp[lhs] > mp[rhs];

        if (lhs.length() != rhs.length())
            return lhs.length() > rhs.length();

        return lhs < rhs;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (str.length() < m)
            continue;

        mp[str]++;
    }

    for (auto& pair : mp)
    {
        res.push_back(pair.first);
    }

    sort(res.begin(), res.end(), Comp());

    for (auto& elem : res)
    {
        cout << elem << '\n';
    }

    return 0;
}