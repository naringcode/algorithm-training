#include <bits/stdc++.h>

using namespace std;

int n;
int val;

int sum;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;

        if (0 != val)
        {
            sum++;
        }
        else
        {
            res = max(res, sum);

            sum = 0;
        }
    }

    res = max(res, sum);

    cout << res;

    return 0;
}