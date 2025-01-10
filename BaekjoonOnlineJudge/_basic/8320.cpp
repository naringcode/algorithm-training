#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i * j <= n)
            {
                res++;
            }
        }
    }

    cout << res;

    return 0;
}
