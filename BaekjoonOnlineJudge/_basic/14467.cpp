#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arr[14];

int n;
int x;
int y;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    std::fill(arr, arr + 14, -1);

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        if (arr[x] == -1)
        {
            arr[x] = y;

            continue;
        }

        if (arr[x] != y)
        {
            res++;

            arr[x] = y;
        }
    }

    cout << res;

    return 0;
}
