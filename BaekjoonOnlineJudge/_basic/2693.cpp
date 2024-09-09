#include <bits/stdc++.h>

using namespace std;

int t;
int arr[10];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 10);

        cout << arr[7] << '\n';
    }

    return 0;
}
