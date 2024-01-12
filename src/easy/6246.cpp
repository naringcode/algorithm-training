#include <bits/stdc++.h>

using namespace std;

int n;
int q;

bool arr[10004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> q;

    while (q--)
    {
        int a;
        int b;

        cin >> a >> b;

        int idx = a;
        do
        {
            arr[idx] = true;

            idx += b;
        } while (idx <= n);
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (false == arr[i])
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
