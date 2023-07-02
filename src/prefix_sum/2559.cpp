#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int arr[100'004];
int sum[100'004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] += arr[i] + sum[i - 1];
    }

    res = sum[k - 1];

    for (int i = k; i < n; i++)
    {
        res = max(res, sum[i] - sum[i - k]);
    }

    cout << res;

    return 0;
}
