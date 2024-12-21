#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;

int res = std::numeric_limits<int>::max();

void go(ll num, int cnt)
{
    cnt++;

    if (num == b)
    {
        res = min(res, cnt);

        return;
    }
    else if (num > 1000000000 || num > b)
    {
        return;
    }

    go(num * 2, cnt);
    go(num * 10 + 1, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    go(a, 0);

    if (res == numeric_limits<int>::max())
    {
        res = -1;
    }

    cout << res;

    return 0;
}
