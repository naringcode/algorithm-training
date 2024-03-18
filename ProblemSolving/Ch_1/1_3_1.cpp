#include <bits/stdc++.h>

using namespace std;

using Type = long long;

Type n;
Type r;

Type combi(Type n, Type r)
{
    // if (r <= 0)
    //     return 1;
    //
    // if (0 == n || n == r)
    //     return 1;

    if (0 == r || n == r)
        return 1LL;

    return combi(n - 1LL, r - 1LL) + combi(n - 1LL, r);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n >> r;

    cout << combi(n, r);

    return 0;
}
