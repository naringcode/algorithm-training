#include <bits/stdc++.h>

using namespace std;

int arr[3];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    while (true)
    {
        cin >> arr[0] >> arr[1] >> arr[2];

        if (0 == arr[0] && 0 == arr[1] && 0 == arr[2])
            break;

        if (arr[1] - arr[0] == arr[2] - arr[1])
        {
            res = arr[2] + (arr[1] - arr[0]);

            cout << "AP " << res << '\n';
        }
        else
        {
            res = arr[2] * (arr[1] / arr[0]);

            cout << "GP " << res << '\n';
        }
    }

    return 0;
}
