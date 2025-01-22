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

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100 - i; j++)
        {
            for (int k = 1; k <= 100 - i - j; k++)
            {
                if (i + j + k == n)
                {
                    if (i < j + 2)
                        break;

                    if (k % 2 != 0)
                        break;

                    res++;
                }
            }
        }
    }

    cout << res;

    return 0;
}
