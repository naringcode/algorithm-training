#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
ll arr[304][304];

int k;
int fromY;
int fromX;
int toY;
int toX;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= m; x++)
        {
            cin >> arr[y][x];
        }
    }

    cin >> k;

    while (k--)
    {
        cin >> fromY >> fromX >> toY >> toX;

        ll res = 0;

        for (int y = fromY; y <= toY; y++)
        {
            for (int x = fromX; x <= toX; x++)
            {
                res += arr[y][x];
            }
        }

        cout << res << '\n';
    }

    return 0;
}
