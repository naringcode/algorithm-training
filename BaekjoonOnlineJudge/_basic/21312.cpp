#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arr[3];

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1] >> arr[2];

    if (ranges::all_of(arr, [](int val) { return val % 2 == 0; }))
    {
        res = arr[0] * arr[1] * arr[2];
    }
    else
    {
        for (int val : arr)
        {
            if (val % 2 == 1)
            {
                res *= val;
            }
        }
    }

    println("{}", res);

    return 0;
}
