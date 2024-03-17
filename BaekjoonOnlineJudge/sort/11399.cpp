#include <bits/stdc++.h>

using namespace std;

int n;

int arr[1004];

int sum;
int res;

int main()
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

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        res += sum;
    }

    cout << res;

    return 0;
}
