#include <bits/stdc++.h>

using namespace std;

int t;

int n;
int m;

int arr[1'000'004];
int val;

int find(int left, int right)
{
    if (left > right)
        return 0;

    int mid = (left + right) / 2;

    if (val == arr[mid])
        return 1;

    if (val < arr[mid])
    {
        return find(left, mid - 1);
    }
    else
    {
        return find(mid + 1, right);
    }
}

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

        cin >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> val;

            cout << find(0, n - 1) << '\n';
        }
    }

    return 0;
}