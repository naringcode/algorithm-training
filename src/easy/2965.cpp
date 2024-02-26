#include <bits/stdc++.h>

using namespace std;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1] >> arr[2];

    cout << max(arr[1] - arr[0], arr[2] - arr[1]) - 1;

    return 0;
}
