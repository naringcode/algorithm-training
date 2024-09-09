#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int chain;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    while (n--)
    {
        int temp = 0;

        cin >> temp;

        if (m < temp)
        {
            chain++;
        }
        else
        {
            chain = 0;
        }

        res = max(res, chain);
    }

    if (0 == res)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    return 0;
}
