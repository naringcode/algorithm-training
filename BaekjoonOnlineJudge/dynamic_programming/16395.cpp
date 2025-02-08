#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arr[34][34];
int n;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    arr[1][1] = 1;

    for (int i = 2; i <= 30; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    cin >> n >> k;

    cout << arr[n][k];

    return 0;
}
