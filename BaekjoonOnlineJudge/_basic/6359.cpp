#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

bool arr[104];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int r : views::iota(0, t))
    {
        ranges::fill(arr, false);

        cin >> n;

        for (int i : views::iota(1, n + 1))
        {
            for (int j : views::iota(i, n + 1) | views::stride(i))
            {
                arr[j] = !arr[j];
            }
        }

        res = 0;

        for (int i : views::iota(1, n + 1))
        {
            if (arr[i] == true)
            {
                res++;
            }
        }

        println("{}", res);
    }
    
    return 0;
}
