#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int arr[100'004];
int psum[100'004];

int res = -999'999'999;

int main()
{
    cin >> n >> k;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    for (int i : views::iota(0, n))
    {
        psum[i + 1] = psum[i] + arr[i];
    }

    for (int i : views::iota(1, n - k + 1))
    {
        res = max(res, psum[i + k] - psum[i]);
    }

    println("{}", res);

    return 0;
}
