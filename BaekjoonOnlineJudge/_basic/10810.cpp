#include <bits/stdc++.h>

using namespace std;

int arr[104];
int n;
int m;

int i;
int j;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    while (m--)
    {
        cin >> i >> j >> k;

        while (i <= j)
        {
            arr[i] = k;

            i++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
