#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll r;
ll c;
ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c >> n;

    ll cntY = r / n + (r % n == 0 ? 0 : 1);
    ll cntX = c / n + (c % n == 0 ? 0 : 1);

    cout << cntY * cntX;

    return 0;
}
