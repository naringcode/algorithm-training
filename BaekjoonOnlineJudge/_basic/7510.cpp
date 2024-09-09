#include <bits/stdc++.h>

using namespace std;

int n;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr + 3);
        
        cout << "Scenario #" << i << ":\n";

        if (arr[2] * arr[2] == arr[1] * arr[1] + arr[0] * arr[0])
        {
            cout << "yes\n\n";
        }
        else
        {
            cout << "no\n\n";
        }
    }

    return 0;
}
