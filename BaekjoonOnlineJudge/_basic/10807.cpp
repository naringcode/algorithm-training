#include <bits/stdc++.h>

using namespace std;

int arr[104];
int n;
int v;

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

    cin >> v;

    cout << std::count(arr, arr + n, v);

    return 0;
}
