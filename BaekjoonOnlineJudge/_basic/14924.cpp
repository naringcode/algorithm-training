#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int s;
int t;
int d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s >> t >> d;

    cout << (t * (d / (s * 2)));

    return 0;
}
