#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int dy = 1;
int dx = 1;

int w;
int h;

int x;
int y;

int t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> w >> h;
    cin >> x >> y;
    cin >> t;

    // 완탐 불가
    int mvX = (x + t) % (2 * w);
    int mvY = (y + t) % (2 * h);

    if (mvX > w)
    {
        mvX = (2 * w) - mvX;
    }
    
    if (mvY > h)
    {
        mvY = (2 * h) - mvY;
    }

    println("{} {}", mvX, mvY);

    return 0;
}
