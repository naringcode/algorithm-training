#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

int arr[84];
int mx;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    for (int x = 1; x <= a; x++)
    {
        for (int y = 1; y <= b; y++)
        {
            for (int z = 1; z <= c; z++)
            {
                arr[x + y + z]++;

                if (mx < arr[x + y + z])
                {
                    mx = arr[x + y + z];

                    res = x + y + z;
                }
            }
        }
    }

    cout << res;

    return 0;
}
