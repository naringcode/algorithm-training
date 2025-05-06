#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll arr[100'004];
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

    sort(arr, arr + n, greater{ });

    for (int idx : views::iota(0, n))
    {
        if ((idx + 1) % 3 == 0)
            continue;

        res += arr[idx];
    }

    println("{}", res);

    return 0;
}
