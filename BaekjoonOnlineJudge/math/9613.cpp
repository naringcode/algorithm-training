#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int arr[1'000'004];
ll  res;

int gcd(int x, int y)
{
    if (0 == y)
    {
        return x;
    }

    return gcd(y, x % y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        res = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res += gcd(arr[i], arr[j]);
            }
        }

        cout << res << '\n';
    }

    return 0;
}
