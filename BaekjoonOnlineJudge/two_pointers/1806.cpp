#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
ll s;

ll psum[100'004];

ll from;
ll to;

ll sum;

ll res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> s;

    for (int i = 1; i <= n; i++)
    {
        ll num;

        cin >> num;

        psum[i] = num + psum[i - 1];
    }

    // 합이 S 이상이 되는 것 중에서 찾는 것이다(sum == s를 찾는 것이 아니다).
    while (to <= n)
    {
        if (sum >= s)
        {
            res = min(res, to - from);

            from++;

            sum = psum[to] - psum[from];
        }
        else
        {
            to++;

            sum = psum[to] - psum[from];
        }
    }

    if (999'999'999 == res)
    {
        cout << 0;
    }
    else
    {
        cout << res;
    }

    return 0;
}