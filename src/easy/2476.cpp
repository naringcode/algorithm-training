#include <bits/stdc++.h>

using namespace std;

int n;
int temp;
int arr[6];

int mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        memset(arr, 0x00, sizeof(arr));

        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            temp--;

            arr[temp]++;
        }

        int piv = *std::max_element(arr, arr + 6);

        if (3 == piv)
        {
            for (int k = 0; k < 6; k++)
            {
                if (piv == arr[k])
                {
                    mx = std::max(mx, 10000 + (k + 1) * 1000);

                    break;
                }
            }
        }
        else if (2 == piv)
        {
            for (int k = 0; k < 6; k++)
            {
                if (piv == arr[k])
                {
                    mx = std::max(mx, 1000 + (k + 1) * 100);

                    break;
                }
            }
        }
        else if (1 == piv)
        {
            for (int k = 5; k >= 0; k--)
            {
                if (piv == arr[k])
                {
                    mx = std::max(mx, (k + 1) * 100);

                    break;
                }
            }
        }
    }

    cout << mx;

    return 0;
}
