#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

map<string, int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n * 2 - 1))
    {
        cin >> str;

        mp[str]++;
    }

    auto iter = ranges::find_if(mp, [](const auto& pair) { 
        return pair.second % 2;
    });

    println("{}", iter->first);

    return 0;
}
