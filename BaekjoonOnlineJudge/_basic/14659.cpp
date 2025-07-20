#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[30004];

int cnt;
int mx;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    for (int i : views::iota(0, n))
    {
        if (mx < arr[i])
        {
            mx  = arr[i];
            cnt = 0;
        }
        else
        {
            cnt++;
            res = max(res, cnt);
        }
    }

    println("{}", res);

    return 0;
}
