#include <bits/stdc++.h>

using namespace std;

int arr[10];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            res ^= (arr[i] || arr[j]);
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                res ^= (arr[i] || arr[j] || arr[k]);
            }
        }
    }

    cout << res;

    return 0;
}
