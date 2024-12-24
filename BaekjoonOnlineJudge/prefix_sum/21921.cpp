#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int x;
int m;

ll psum[250'004];
ll num;

ll res;
ll cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> m;

    for (int i = 1; i <= x; i++)
    {
        cin >> num;

        psum[i] = psum[i - 1] + num;
    }

    for (int i = m; i <= x; i++)
    {
        ll temp = psum[i] - psum[i - m];

        if (res == temp)
        {
            cnt++;
        }
        else if (res < temp)
        {
            res = temp;
            cnt = 1;
        }
    }

    if (res == 0)
    {
        cout << "SAD";
    }
    else
    {
        cout << res << '\n' << cnt;
    }

    return 0;
}
