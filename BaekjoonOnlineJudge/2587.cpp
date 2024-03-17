#include <bits/stdc++.h>

using namespace std;

int arr[5];

int main()
{
    for (int& elem : arr)
    {
        cin >> elem;
    }

    sort(arr, arr + 5);

    cout << accumulate(arr, arr + 5, 0) / 5 << '\n';
    cout << arr[2];
    
    return 0;
}