#include <bits/stdc++.h>

using namespace std;

int n;
int c;
int arr[2'000'004];

int a;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> c;

    while (n--)
    {
        cin >> a;

        for (int idx = a; idx <= c; idx += a)
        {
            arr[idx] = true;
        }
    }

    for (int idx = 0; idx <= c; idx++)
    {
        res += arr[idx];
    }

    cout << res;

    return 0;
}
