#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < (n / 5) + 1; i++)
    {
        int remaining = n - (i * 5);

        for (int j = 0; j < (remaining / 2) + 1; j++)
        {
            int nextRemaining = remaining - (j * 2);

            if (0 == nextRemaining)
            {
                res = min(res, i + j);
            }
        }
    }

    if (999'999'999 != res)
    {
        cout << res;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
