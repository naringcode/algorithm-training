#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll q;

set<ll> visited;

// 역순 접근
ll go(ll here)
{
    // if (0LL == here)
    //     return 0;
    //
    // auto iter = visited.find(here);
    // if (visited.end() != iter)
    //     return here;
    //
    // return go(here / 2LL);

    // 찾을 때는 아래에서 위로 타고 올라가는 것이 아닌 위에서 아래로 찾는다고 가정해야 함.
    ll ret = 0;

    while (here > 0)
    {
        auto iter = visited.find(here);
        if (visited.end() != iter)
        {
            ret = here;
        }

        here /= 2;
    }
    
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> q;

    for (ll i = 0; i < q; i++)
    {
        ll temp;
        cin >> temp;

        ll ret = go(temp);
        
        if (0 == ret)
        {
            visited.insert(temp);
        }

        cout << ret << '\n';
    }

    return 0;
}
