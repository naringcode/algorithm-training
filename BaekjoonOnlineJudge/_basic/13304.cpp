#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int arr[10];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i : views::iota(0, n))
    {
        int a;
        int b;
        cin >> a >> b;

        if (b == 1 || b == 2)
        {
            arr[0]++;
        }
        else if (a == 0 && (b == 3 || b == 4))
        {
            arr[1]++;
        }
        else if (a == 1 && (b == 3 || b == 4))
        {
            arr[2]++;
        }
        else if (a == 0 && (b == 5 || b == 6))
        {
            arr[3]++;
        }
        else if (a == 1 && (b == 5 || b == 6))
        {
            arr[4]++;
        }
    }

    for (int i : views::iota(0, 5))
    {
        res += arr[i] / k;

        if (arr[i] % k != 0)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
