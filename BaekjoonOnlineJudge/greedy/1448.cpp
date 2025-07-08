#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[1'000'004];

int res = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater{ });

    for (int i : views::iota(0, n - 2))
    {
        if (arr[i] < arr[i + 1] + arr[i + 2])
        {
            res = arr[i] + arr[i + 1] + arr[i + 2];
            
            break;
        }
    }

    println("{}", res);

    return 0;
}
