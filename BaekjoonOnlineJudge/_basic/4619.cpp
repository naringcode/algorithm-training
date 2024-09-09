#include <bits/stdc++.h>

using namespace std;

int b;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> b >> n;

        if (0 == b && 0 == n)
            break;

        int mn  = b;
        int res = 0;

        int val = 0;

        while (true)
        {
            val++;

            int temp = pow(val, n) - b;

            if (mn > abs(temp))
            {
                res = val;
                mn  = abs(temp);
            }

            if (temp > 0)
                break;
        }

        cout << res << '\n';
    }

    return 0;
}
