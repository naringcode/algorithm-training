#include <bits/stdc++.h>

using namespace std;

int t;
long long n;

long long mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        mx = n;

        while (1 != n)
        {
            if (0 == n % 2)
            {
                n /= 2;
            }
            else
            {
                n *= 3;
                n += 1;
            }

            mx = max(mx, n);
        }

        cout << mx << '\n';
    }

    return 0;
}
