#include <bits/stdc++.h>

using namespace std;

int n;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << "Gnomes:\n";

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }

        if (arr[0] < arr[1] && arr[1] < arr[2])
        {
            cout << "Ordered\n";
        }
        else if (arr[0] > arr[1] && arr[1] > arr[2])
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }

    return 0;
}
