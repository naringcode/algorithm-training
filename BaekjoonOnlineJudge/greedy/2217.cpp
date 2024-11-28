#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100'004];   

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

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        res = max(res, arr[i] * (n - i));
    }
    
    cout << res;

    return 0;
}