#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int go(int val, int r)
{
    if (val < 0)
        return 0;

    if (0 == val)
        return 1;
    
    int res = 0;

    for (int i = r; i <= m; i++)
    {
        res += go(val - i, i);
    }

    return res;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n >> m;

    cout << go(n, 1);

    return 0;
}
