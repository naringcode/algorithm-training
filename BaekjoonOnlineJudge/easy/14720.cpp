#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1004];

int prv = 2;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((0 == arr[i] && 2 == prv) ||
            (1 == arr[i] && 0 == prv) ||
            (2 == arr[i] && 1 == prv))
        {
            res++;

            prv = arr[i];
        }
    }

    cout << res;

    return 0;
}
