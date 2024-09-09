#include <bits/stdc++.h>

using namespace std;

int n; // A hotel has N rooms with two beds
int g;

int a;

int arr[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> g;

    for (int cnt = 0; cnt < g; cnt++)
    {
        cin >> a;

        // there are empty rooms
        for (int idx = 0; idx < n; idx++)
        {
            if (0 == arr[idx])
            {
                if (a >= 2)
                {
                    arr[idx] = 2;

                    a -= 2;
                }
                else if (1 == a)
                {
                    arr[idx] = 1;

                    a--;
                }

                if (0 == a)
                    break;
            }
        }

        if (0 == a)
            continue;

        // there are no empty rooms
        for (int idx = 0; idx < n; idx++)
        {
            if (1 == arr[idx])
            {
                if (a >= 1)
                {
                    arr[idx] = 2;

                    a--;
                }

                if (0 == a)
                    break;
            }
        }
    }

    for (int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << '\n';
    }

    return 0;
}
