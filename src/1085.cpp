#include <iostream>

using namespace std;

int x, y;
int w, h;

int res = 1004;

int main()
{
    cin >> x >> y >> w >> h;

    res = min(res, x);
    res = min(res, y);

    res = min(res, w - x);
    res = min(res, h - y);

    cout << res;

    return 0;
}
