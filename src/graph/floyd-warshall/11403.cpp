#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;
int arr[104][104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];

            if (0 == arr[y][x])
            {
                arr[y][x] = INF;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (INF == arr[i][j])
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }

        cout << '\n';
    }

    return 0;
}
