#include <bits/stdc++.h>

using namespace std;

int n;
int m;

char ch;

bool rows[54];
bool cols[54];

int temp;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> ch;

            if ('X' == ch)
            {
                rows[y] = true;
                cols[x] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (false == rows[i])
        {
            res++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (false == cols[i])
        {
            temp++;
        }
    }

    res = max(res, temp);

    cout << res;

    return 0;
}