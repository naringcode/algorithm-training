#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
ll arr[3];

bool go(int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % num != 0)
            return false;
    }

    return true;
}

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

    sort(arr, arr + n);

    for (ll num = 1; num <= arr[n - 1]; num++)
    {
        if (go(num))
        {
            cout << num << '\n';
        }
    }

    return 0;
}
