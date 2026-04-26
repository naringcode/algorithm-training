#include <bits/stdc++.h>

using namespace std;

#define y1 yyyyyyy

int t;
int n;

int x1, y1;
int x2, y2;

int cx, cy, r;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        cin >> n;

        res = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> cx >> cy >> r;

            r = r * r;

            bool chk1 = r > ((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy));
            bool chk2 = r > ((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy));

            if (chk1 || chk2)
            {
                res++;
            }

            if (chk1 && chk2)
            {
                res--;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
