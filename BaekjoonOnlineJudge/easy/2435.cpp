#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int arr[204];

int res = -999'999'999;

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

    for (int i = 0; i <= n - k; i++)
    {
        int temp = 0;

        for (int j = 0; j < k; j++)
        {
            temp += arr[i + j];
        }

        res = max(res, temp);
    }

    cout << res;

    return 0;
}
