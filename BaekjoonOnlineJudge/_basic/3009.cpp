#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};

Point points[3];

Point res;

int main()
{
    cin >> points[0].x >> points[0].y;
    cin >> points[1].x >> points[1].y;
    cin >> points[2].x >> points[2].y;

    if (points[0].x == points[1].x)
    {
        res.x = points[2].x;
    }
    else if (points[1].x == points[2].x)
    {
        res.x = points[0].x;
    }
    else if (points[0].x == points[2].x)
    {
        res.x = points[1].x;
    }

    if (points[0].y == points[1].y)
    {
        res.y = points[2].y;
    }
    else if (points[1].y == points[2].y)
    {
        res.y = points[0].y;
    }
    else if (points[0].y == points[2].y)
    {
        res.y = points[1].y;
    }

    cout << res.x << ' ' << res.y;

    return 0;
}
