#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[500004];

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];
    }

    ranges::sort(arr, arr + n);

    for (int idx : views::iota(0, n))
    {
        res += abs(arr[idx] - (idx + 1));
    }

    cout << res;

    return 0;
}
