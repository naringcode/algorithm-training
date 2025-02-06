#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        cout << m * 2 - n << ' ' << n - m << '\n';
    }

    return 0;
}
