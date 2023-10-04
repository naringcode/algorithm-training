#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int l;

int idx;
int cnt;

int arr[54];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> l;

    if (1 == m)
    {
        cout << 0;

        return 0;
    }

    arr[0] = 1;

    while (true)
    {
        if (0 == arr[idx] % 2)
        {
            // 짝수번
            idx = (idx + l) % n;
        }
        else
        {
            // 홀수번
            idx = (idx + n - l) % n;
        }

        arr[idx]++;

        cnt++;

        if (m == arr[idx])
        {
            break;
        }
    }

    cout << cnt;

    return 0;
}