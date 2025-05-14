#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct Point
{
    double x;
    double y;
};

Point a;
Point b;
Point c;

double mx;
double mn;

double check(Point a, Point b, Point c)
{
    double ret = (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);

    return abs(ret);
}

double go(Point a, Point b)
{
    double x = a.x - b.x;
    double y = a.y - b.y;

    return sqrt(x * x + y * y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

    if (check(a, b, c) == 0.0)
    {
        println("-1");

        return 0;
    }

    double ab = go(a, b);
    double bc = go(b, c);
    double ca = go(c, a);

    double temp = (ab + bc) * 2.0;
    mx = temp;
    mn = temp;

    temp = (bc + ca) * 2.0;
    mx = max(mx, temp);
    mn = min(mn, temp);
    
    temp = (ca + ab) * 2.0;
    mx = max(mx, temp);
    mn = min(mn, temp);
    
    println("{:.12f}", mx - mn);

    return 0;
}
