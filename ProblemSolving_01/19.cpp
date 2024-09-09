#include <bits/stdc++.h>

using namespace std;

int n;
int arr[104];

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

    int pivot = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > arr[pivot])
        {
            pivot = i;

            res++;
        }
    }

    cout << res;

    return 0;
}
