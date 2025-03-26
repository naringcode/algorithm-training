#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;
int l;

int id;
map<string, int> mp;

vector<pair<int, string>> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> l;

    for (int i : views::iota(0, l))
    {
        string temp;
        cin >> temp;

        mp[temp] = id++;
    }

    for (auto [name, id] : mp)
    {
        res.push_back({ id, name });
    }

    ranges::sort(res);

    int mn = min(k, l);
    mn = min((int)res.size(), mn);

    for (int i : views::iota(0, mn))
    {
        println("{}", res[i].second);
    }

    return 0;
}
