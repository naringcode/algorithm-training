#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll t;
ll p;

ll sizeArr[6];
ll res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    for (int i = 0; i < 6; i++)
    {
        cin >> sizeArr[i];
    }

    cin >> t >> p;

    for (int i = 0; i < 6; i++)
    {
        if (0 == sizeArr[i] % t)
        {
            res += sizeArr[i] / t;
        }
        else
        {
            res += sizeArr[i] / t + 1;
        }
    }

    cout << res << '\n';

    cout << n / p << ' ' << n % p; // 묶음과 한 자루씩

    return 0;
}
