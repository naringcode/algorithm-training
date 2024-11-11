#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int k;

int arr[10];
int res;

void go(int curr, int prev)
{
    if (curr > n)
    {
        res = max(res, prev);

        return;
    }

    for (int i = 0; i < k; i++)
    {
        go(curr * 10 + arr[i], curr);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    go(0, 0);

    cout << res;

    return 0;
}
