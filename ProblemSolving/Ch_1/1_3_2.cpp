#include <bits/stdc++.h>

using namespace std;

using Type = long long;

Type memo[204][204];

Type n;
Type r;

Type combi(Type n, Type r)
{
    if (0 == r || n == r)
        return 1;

    auto& val = memo[n][r];

    if (0 != val)
        return val;

    val = combi(n - 1, r - 1) + combi(n - 1, r);

    return val;
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
