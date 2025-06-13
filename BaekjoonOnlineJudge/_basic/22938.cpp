#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define y1 yyyy

double x1;
double y1;
double r1;

double x2;
double y2;
double r2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    
    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (dist < (r1 + r2))
    {
        println("YES");
    }
    else
    {
        println("NO");
    }

    return 0;
}
