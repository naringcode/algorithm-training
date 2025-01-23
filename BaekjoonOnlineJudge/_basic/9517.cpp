#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;
int n;
int t;
char z;

int remaining = 210;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;
    cin >> n;

    k--;

    while (n--)
    {
        cin >> t >> z;

        if (t > remaining)
            break;

        remaining -= t;

        if (z == 'T')
        {
            k = (k + 1) % 8;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t >> z;
    }

    cout << k + 1;

    return 0;
}
