#include <bits/stdc++.h>

using namespace std;

int arr[4];

int main()
{
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    sort(arr, arr + 4);

    cout << arr[0] * arr[2];

    return 0;
}
