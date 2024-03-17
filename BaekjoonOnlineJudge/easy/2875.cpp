#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int k;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    while (true)
    {
        n -= 2;
        m -= 1;

        if (n < 0 || m < 0 || n + m < k)
            break;

        res++;
    }

    cout << res;

    return 0;
}