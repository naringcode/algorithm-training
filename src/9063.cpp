#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};

int   n;
Point temp;

Point minP{ 99999, 99999 };
Point maxP{ -99999, -99999 };

int res;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> temp.x >> temp.y;

        minP.x = std::min(temp.x, minP.x);
        minP.y = std::min(temp.y, minP.y);

        maxP.x = std::max(temp.x, maxP.x);
        maxP.y = std::max(temp.y, maxP.y);
    }

    temp.x = maxP.x - minP.x;
    temp.y = maxP.y - minP.y;

    res = std::abs(temp.x * temp.y);

    cout << res;

    return 0;
}
