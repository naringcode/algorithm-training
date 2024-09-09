#include <bits/stdc++.h>

using namespace std;

int n;
int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int mn  = 999;
        int sum = 0;

        for (int j = 0; j < 7; j++)
        {
            cin >> num;

            if (0 == num % 2)
            {
                mn = min(mn, num);
                sum += num;
            }
        }

        cout << sum << ' ' << mn << '\n';
    }

    return 0;
}
