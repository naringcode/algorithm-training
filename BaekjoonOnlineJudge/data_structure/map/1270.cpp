#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int t;

map<ll, ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> t;

        mp.clear();

        for (int j : views::iota(0, t))
        {
            ll temp;
            cin >> temp;

            mp[temp]++;
        }

        auto iter = ranges::max_element(mp, less{ }, [](auto& pair) { 
            return pair.second;  
        });

        if (iter->second * 2 > t)
        {
            println("{}", iter->first);
        }
        else
        {
            println("SYJKGW");
        }
    }

    return 0;
}
