#include <bits/stdc++.h>

using namespace std;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3, greater());

    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        cout << 2;
    }
    else if (arr[0] * arr[0] == (arr[1] * arr[1] + arr[2] * arr[2]))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
