#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 5, greater{ });

        if (arr[1] - arr[3] >= 4)
        {
            cout << "KIN\n";
        }
        else
        {
            cout << (arr[1] + arr[2] + arr[3]) << "\n";
        }
    }

    return 0;
}
