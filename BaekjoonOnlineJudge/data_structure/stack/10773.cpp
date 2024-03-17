#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;
ll n;

vector<ll> vec;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> n;

        if (0 == n)
        {
            vec.pop_back();
        }
        else
        {
            vec.push_back(n);
        }
    }

    while (vec.size())
    {
        res += vec.back();

        vec.pop_back();
    }

    cout << res;

    return 0;
}