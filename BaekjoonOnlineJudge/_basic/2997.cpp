#include <bits/stdc++.h>

using namespace std;

int arr[3];

int temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    temp = min(arr[2] - arr[1], arr[1] - arr[0]);

    if (temp != arr[2] - arr[1])
    {
        cout << arr[1] + temp;
    }
    else if (temp != arr[1] - arr[0])
    {
        cout << arr[0] + temp;
    }
    else
    {
        cout << arr[2] + temp;
    }

    return 0;
}
