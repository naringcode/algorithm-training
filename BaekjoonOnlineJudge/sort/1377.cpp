#include <bits/stdc++.h>

using namespace std;

/*
bool changed = false;

for (int i = 1; i <= N + 1; i++) 
{
    changed = false;

    for (int j=1; j<=N-i; j++) 
    {
        if (A[j] > A[j+1]) 
        {
            changed = true;

            swap(A[j], A[j+1]);
        }
    }

    if (changed == false) 
    {
        cout << i << '\n';

        break;
    }
}
 */

int n;

pair<int, int> arr[500'004];

int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i].second = i;
        
        cin >> arr[i].first;
    }

    stable_sort(arr, arr + n);
    // sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        res = min(res, i - arr[i].second - 1);
    }

    cout << abs(res);

    return 0;
}