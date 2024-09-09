#include <bits/stdc++.h>

using namespace std;

int n;
int res;

int go(int num)
{
    int ret = 0;

    while (0 != num)
    {
        num /= 10;

        ret++;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        res += go(i);
    }

    cout << res;

    return 0;
}
