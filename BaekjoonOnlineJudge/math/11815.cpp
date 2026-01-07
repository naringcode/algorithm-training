#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
ll x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> x;

        ll r = sqrt(x);

        if (r * r == x)
        {
            print("1 ");
        }
        else
        {
            print("0 ");
        }
    }

    return 0;
}
