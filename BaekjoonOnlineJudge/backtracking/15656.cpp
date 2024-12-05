#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int arr[10];
int res[10];

void go(int idx)
{
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << res[i] << ' ';
        }

        cout << '\n';

        return;
    }

    for (int i = 0; i < n; i++)
    {
        res[idx] = arr[i];

        go(idx + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    go(0);

    return 0;
}
