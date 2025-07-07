#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int arr[1004];
int psum[1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        ranges::fill(arr, 0);
        ranges::fill(psum, 0);

        for (int i : views::iota(0, n))
        {
            cin >> arr[i];
        }

        for (int i : views::iota(0, n))
        {
            psum[i + 1] = psum[i] + arr[i];
        }

        int mx = -999'999'999;

        for (int i : views::iota(0, n))
        {
            for (int j : views::iota(i + 1, n + 1))
            {
                mx = max(mx, psum[j] - psum[i]);
            }
        }

        println("{}", mx);
    }

    return 0;
}
