#include <bits/stdc++.h>

using namespace std;

int mat[104][104];

int n, m;

int temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
  
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> mat[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> temp;

            mat[y][x] += temp;
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cout << mat[y][x] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
