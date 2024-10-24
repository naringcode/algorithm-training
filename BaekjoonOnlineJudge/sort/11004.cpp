#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int k;

int arr[5'000'004];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << arr[k - 1];

    return 0;
}
