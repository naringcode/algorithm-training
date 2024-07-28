#include <bits/stdc++.h>

using namespace std;

int arr[3];
int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1] >> arr[2] >> n;

    for (int a = 0; a <= n / arr[0]; a++)
    {
        for (int b = 0; b <= n / arr[1]; b++)
        {
            for (int c = 0; c <= n / arr[2]; c++)
            {
                if (a * arr[0] + b * arr[1] + c * arr[2] == n)
                {
                    res = 1;

                    goto LOOPBREAK;
                }
            }
        }
    }

    LOOPBREAK:

    cout << res;

    return 0;
}
