#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int arr[1'000'004];

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

    sort(arr, arr + n, greater{});

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}
