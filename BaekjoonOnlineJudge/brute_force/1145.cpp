#include <bits/stdc++.h>

using namespace std;

int n = 1;
int arr[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        int cnt = 0;

        for (int i = 0; i < 5; i++)
        {
            if (0 == n % arr[i])
            {
                cnt++;

                if (3 == cnt)
                {
                    cout << n;

                    return 0;
                }
            }
        }

        n++;
    }

    return 0;
}