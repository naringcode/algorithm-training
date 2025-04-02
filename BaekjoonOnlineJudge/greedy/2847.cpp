#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[20004];

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
    
    for (int idx = n - 2; idx >= 0; idx--)
    {
        if (arr[idx] >= arr[idx + 1])
        {
            int diff = arr[idx] - (arr[idx + 1] - 1);

            arr[idx] = (arr[idx + 1] - 1);
            res += diff;
        }
    }

    println("{}", res);

    return 0;
}
