#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[1004];

int res;

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

    ranges::sort(arr, arr + n, greater{ });
    
    for (int idx : views::iota(0, n))
    {
        if (arr[idx] >= idx + 1)
        {
            res = idx + 1;
        }
    }

    println("{}", res);

    return 0;
}
