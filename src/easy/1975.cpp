#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    // t = 100'000;

    while (t--)
    {
        cin >> n;
        // n = 1000;

        int res  = 0;

        for (int i = 2; i <= n; i++)
        {
            int temp = 0;
            int nn   = n;

            while (0 != nn)
            {
                if (0 == nn % i)
                {
                    temp++;
                }
                else
                {
                    break;
                }

                nn /= i;
            }

            res += temp;
        }

        // cout << t << ' ' << res << '\n';
        cout << res << '\n';
    }

    return 0;
}
