#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll score;
ll p;

ll res = 1;

vector<ll> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> score >> p;

    for (ll i = 1; i <= n; i++)
    {
        ll temp;
        cin >> temp;

        vec.push_back(temp);
    }

    vec.push_back(score);
    sort(vec.begin(), vec.end(), greater{ });

    ll pos = upper_bound(vec.begin(), vec.end(), score, greater{ }) - vec.begin();
    
    if (pos > p)
    {
        cout << -1;
    }
    else
    {
        pos = lower_bound(vec.begin(), vec.end(), score, greater{ }) - vec.begin();
        pos++;

        cout << pos;
    }

    return 0;
}
