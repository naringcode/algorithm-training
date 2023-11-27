#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
vector<ll> vec;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    vec.resize(n);

    for (auto& elem : vec)
    {
        cin >> elem;
    }

    // 등차
    if (vec[1] - vec[0] == vec[2] - vec[1])
    {
        res = vec.back() + (vec[1] - vec[0]);
    }
    // 등비
    else
    {
        res = vec.back() * (vec[1] / vec[0]);
    }

    cout << res;

    return 0;
}