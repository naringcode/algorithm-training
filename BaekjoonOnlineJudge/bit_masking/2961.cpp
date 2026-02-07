#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

using ll = long long;

int n;

ll arr1[14];
ll arr2[14];

ll res = 999'999'999'999;

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }

    for (int i = 1; i < (1 << n); i++)
    {
        ll res1 = 1;
        ll res2 = 0;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                res1 *= arr1[j];
                res2 += arr2[j];
            }
        }

        res = min(res, abs(res1 - res2));
    }

    cout << res;

    return 0;
}
