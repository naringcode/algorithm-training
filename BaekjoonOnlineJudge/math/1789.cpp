#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll s;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s;

    ll sum = 0;
    ll cnt = 0;

    while (true)
    {
        sum += cnt;

        if (sum > s)
        {
            cnt--;

            break;
        }

        cnt++;
    }

    cout << cnt;

    return 0;
}
