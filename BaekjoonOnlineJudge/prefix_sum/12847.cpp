#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

ll psum[100'004];
ll sum;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> sum;

        psum[i] = psum[i - 1] + sum;
    }

    for (int i = m; i <= n; i++)
    {
        res = max(res, psum[i] - psum[i - m]);
    }

    cout << res;

    return 0;
}
