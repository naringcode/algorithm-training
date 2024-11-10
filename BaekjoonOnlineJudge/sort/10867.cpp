#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int arr[100'004];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int* atPtr = unique(arr, arr + n);
    *atPtr = -111'111'111;

    int idx = 0;
    while (-111'111'111 != arr[idx])
    {
        cout << arr[idx] << ' ';

        idx++;
    }

    return 0;
}
