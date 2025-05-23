#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[5'000'004];

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

    for (int idx = 0; idx < n; idx++)
    {
        res++;

        while (idx + 1 < n && arr[idx] > arr[idx + 1])
        {
            idx++;
        }
    }

    println("{}", res);

    return 0;
}
