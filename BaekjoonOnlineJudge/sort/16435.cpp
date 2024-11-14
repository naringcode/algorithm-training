#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int l;

int arr[1004];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (l < arr[i])
            break;

        l++;
    }

    cout << l;

    return 0;
}
