#include <bits/stdc++.h>

using namespace std;

int n;
int cnt;

int arr[20000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cnt = 1;

    for (int idx = 1; idx <= 10000; idx++)
    {
        for (int j = 0; j < cnt; j++)
        {
            arr[j + idx] = cnt * (j + 1) + arr[idx - 1];
        }

        idx += cnt - 1;
        cnt++;
    }

    while (true)
    {
        cin >> n;

        if (0 == n)
            break;

        cout << n << ' ' << arr[n] << '\n';
    }

    return 0;
}
