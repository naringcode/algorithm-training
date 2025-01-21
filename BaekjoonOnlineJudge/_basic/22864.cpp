#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;
int m;

int piro;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> m;

    for (int i = 0; i < 24; i++)
    {
        if (piro + a <= m)
        {
            piro += a;
            res  += b;
        }
        else
        {
            piro = max(piro - c, 0);
        }
    }

    cout << res;

    return 0;
}
