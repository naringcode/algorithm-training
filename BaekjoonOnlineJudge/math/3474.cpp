#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        res = 0;

        while (n > 4)
        {
            res += n / 5;

            n /= 5;
        }

        cout << res << '\n';
    }

    return 0;
}
