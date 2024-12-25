#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

ll sum;
ll psum[100'004];

ll res = numeric_limits<ll>::min();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> sum;

        psum[i] = psum[i - 1] + sum;
    }

    for (int i = k; i <= n; i++)
    {
        res = max(res, psum[i] - psum[i - k]);
    }

    cout << res;

    return 0;
}
