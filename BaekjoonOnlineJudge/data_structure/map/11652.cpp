#include <bits/stdc++.h>

using namespace std;

using ll = long long;

map<ll, ll> mp;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        ll temp;

        cin >> temp;

        mp[temp]++;
    }

    auto mx = std::max_element(mp.begin(), mp.end(), [](auto& lhs, auto& rhs) { 
        if (lhs.second == rhs.second)
            return lhs.first > rhs.first;

        return lhs.second < rhs.second;
    });
    
    std::cout << mx->first;

    return 0;
}
