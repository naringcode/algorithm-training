#include <bits/stdc++.h>

using namespace std;

int n;
int num;

int mx = -9999;
int mn = 9999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> num;

        mx = max(mx, num);
        mn = min(mn, num);
    }

    cout << mx - mn;

    return 0;
}
