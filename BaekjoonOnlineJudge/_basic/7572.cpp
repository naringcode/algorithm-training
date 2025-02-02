#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    n += 2400 - 2013;

    res += ((n + 5) % 12) + 'A';
    res += ((n + 9) % 10) + '0';

    cout << res;

    return 0;
}
