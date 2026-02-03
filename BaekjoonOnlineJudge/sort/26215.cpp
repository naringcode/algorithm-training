#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int n;
int arr[104];

int res;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater{ });

    while (arr[0] > 0 && arr[1] > 0)
    {
        arr[0]--;
        arr[1]--;

        res++;

        sort(arr, arr + n, greater{ });
    }

    res += arr[0];

    if (res > 1440)
    {
        res = -1;
    }

    cout << res;

    return 0;
}
