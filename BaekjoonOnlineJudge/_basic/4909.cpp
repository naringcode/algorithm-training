#include <bits/stdc++.h>

using namespace std;

int arr[6];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 6);

        if (0 == arr[0] && 0 == arr[5])
            break;

        double temp = arr[1] + arr[2] + arr[3] + arr[4];
        temp /= 4.0;

        cout << temp << '\n';
    }

    return 0;
}
