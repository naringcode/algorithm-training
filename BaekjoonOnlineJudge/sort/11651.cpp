#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x;
    int y;

    bool operator<(const Point& point) const
    {
        if (this->y == point.y)
        {
            return this->x < point.x;
        }

        return this->y < point.y;
    }
};

vector<Point> vec;

int   n;
Point p;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p.x >> p.y;

        vec.push_back(p);
    }

    sort(vec.begin(), vec.end());

    for (Point& elem : vec)
    {
        cout << elem.x << ' ' << elem.y << '\n';
    }

    return 0;
}