#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    int cnt = 0;

    while (n > 0)
    {
        cnt++;

        n -= cnt;

        res++;

        if (cnt >= n)
        {
            cnt = 0;
        }
    }

    cout << res;

    return 0;
}
