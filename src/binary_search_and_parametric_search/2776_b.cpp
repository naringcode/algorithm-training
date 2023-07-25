#include <bits/stdc++.h>

using namespace std;

int t;

int n;
int m;

int arr[1'000'004];
int val;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        arr[n] = 999'999'999;

        cin >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> val;

            auto* lower = lower_bound(arr, arr + n, val);

            // cout << *lower << '\n';

            cout << (val == *lower ? 1 : 0) << '\n';
        }
    }

    return 0;
}