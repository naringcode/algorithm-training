#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int arr[2][6];
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    while (n--)
    {
        int a;
        int b;

        cin >> a >> b;
        arr[a][b - 1]++;
    }

    for (int i : views::iota(0, 6))
    {
        res += arr[0][i] / k;
        res += arr[1][i] / k;

        if (arr[0][i] % k != 0)
        {
            res++;
        }

        if (arr[1][i] % k != 0)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
