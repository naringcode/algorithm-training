#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
ll arr[54];

ll cluster;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> cluster;

    for (int i = 0; i < n; i++)
    {
        res += (arr[i] / cluster) * cluster;

        if (arr[i] % cluster)
        {
            res += cluster;
        }
    }

    cout << res;

    return 0;
}
