#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll fibo[84];
ll lines[84];

ll num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fibo[1] = 1;
    fibo[2] = 1;

    for (ll idx = 3; idx <= 80; idx++)
    {
        fibo[idx] = fibo[idx - 1] + fibo[idx - 2];
    }

    for (ll idx = 1; idx <= 80; idx++)
    {
        lines[idx] = fibo[idx] + fibo[idx - 1];
    }

    cin >> num;

    if (num == 1)
    {
        cout << 4;
    }
    else
    {
        cout << lines[num] * 2 + lines[num - 1] * 2;
    }

    return 0;
}
