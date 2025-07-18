#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[14];

int res[14];

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
        int cnt = arr[i];
        int nxt = -1;

        while (cnt >= 0)
        {
            nxt++;

            if (res[nxt] == 0)
            {
                cnt--;
            }
        }

        res[nxt] = i + 1;
    }

    for (int i : views::iota(0, n))
    {
        print("{} ", res[i]);
    }

    return 0;
}
