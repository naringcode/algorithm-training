#include <bits/stdc++.h>

using namespace std;

int n;
int arr[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << count(arr, arr + 5, n);

    return 0;
}
