#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int r;
int w;
int l;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 0;

    while (cin >> r)
    {
        if (r == 0)
            break;
        
        cin >> w >> l;

        cnt++;

        int sq = w * w + l * l;
        r = (r + r) * (r + r);

        if (sq > r)
        {
            println("Pizza {} does not fit on the table.", cnt);
        }
        else
        {
            println("Pizza {} fits on the table.", cnt);
        }
    }

    return 0;
}
