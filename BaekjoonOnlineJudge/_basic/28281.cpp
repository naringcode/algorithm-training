#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int x;

int arr[100'004];

int minSum = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> x;

    cin >> arr[0];

    for (int idx : views::iota(1, n))
    {
        cin >> arr[idx];

        minSum = min(minSum, arr[idx - 1] + arr[idx]);
    }

    println("{}", minSum * x);

    return 0;
}
