#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[20004];

int sum = 999'999'999;
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

    for (int i : views::iota(0, n))
    {
        int temp = 0;

        for (int j : views::iota(0, n))
        {
            temp += abs(arr[i] - arr[j]);
        }

        if (temp <= sum)
        {
            if (temp == sum)
            {
                res = min(res, arr[i]);
            }
            else
            {
                res = arr[i];
            }

            sum = temp;
        }
    }

    println("{}", res);

    return 0;
}
