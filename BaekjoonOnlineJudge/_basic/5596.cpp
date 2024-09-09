#include <bits/stdc++.h>

using namespace std;

int arr1[4];
int arr2[4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3];
    cin >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3];

    cout << max(accumulate(arr1, arr1 + 4, 0), accumulate(arr2, arr2 + 4, 0));
    
    return 0;
}
