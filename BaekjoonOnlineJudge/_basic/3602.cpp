#include <bits/stdc++.h>

using namespace std;

int arr[2];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1];

    sort(arr, arr + 2);

    if (0 == arr[1])
    {
        cout << "Impossible";

        return 0;
    }

    if (arr[0] == arr[1])
    {
        cout << (int)sqrt(arr[0] * 2);
    }
    else // if (arr[0] < arr[1])
    {
        cout << (int)sqrt(arr[0] * 2 + 1);
    }

    return 0;
}
