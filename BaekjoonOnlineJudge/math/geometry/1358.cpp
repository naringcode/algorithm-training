#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int w;
int h;
int x;
int y;
int p;

int r;

int res;

bool check(int px, int py)
{
    if (px >= x && px <= x + w && py >= y && py <= y + h)
        return true;

    int lDist = (px - x) * (px - x) + (py - (y + r)) * (py - (y + r));
    if (r * r >= lDist)
        return true;

    int rDist = (px - (x + w)) * (px - (x + w)) + (py - (y + r)) * (py - (y + r));
    if (r * r >= rDist)
        return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> w >> h >> x >> y >> p;

    r = h / 2;

    while (p--)
    {
        int px;
        int py;

        cin >> px >> py;

        if (check(px, py) == true)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
