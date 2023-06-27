#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int j;

int drop;

int lx = 1;
int rx;

int temp;
int res;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n >> m;

    cin >> j;

    rx = m;
    
    for (int i = 0; i < j; i++)
    {
        cin >> drop;

        if (drop < lx)
        {
            temp = lx - drop;

            lx -= temp;
            rx -= temp;

            res += temp;
        }
        else if (rx < drop)
        {
            temp = drop - rx;

            lx += temp;
            rx += temp;

            res += temp;
        }
    }

    cout << res;

    return 0;
}