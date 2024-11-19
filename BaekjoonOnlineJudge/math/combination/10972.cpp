#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[10004];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (next_permutation(arr, arr + n))
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}
