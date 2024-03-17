#include <bits/stdc++.h>

using namespace std;

int arr[104];
int n;
int m;

int i;
int j;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    while (m--)
    {
        cin >> i >> j;
        std::reverse(&arr[i], &arr[j + 1]);
    }

    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
