#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int k;

int arr[1004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        cin >> k;

        for (int idx : views::iota(k, n + 1) | views::stride(k))
        {
            arr[idx] = idx;
        }    
    }

    res = accumulate(arr, arr + n + 1, 0);

    println("{}", res);

    return 0;
}
