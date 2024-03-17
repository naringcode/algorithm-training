#include <iostream>

using namespace std;

int a, b, c, d, e, f;

//int gcd(int a, int b)
//{
//    if (a == 0)
//        return b;
//
//    return gcd(b % a, a);
//}
//
//int lcm(int a, int b)
//{
//    return (a * b) / gcd(a, b);
//}

int find_x(int a, int b, int c, int d, int e, int f)
{
    return (c * e - b * f) / (a * e - b * d);
}

int find_y(int a, int b, int c, int d, int e, int f)
{
    return (c * d - a * f) / (b * d - a * e);
}

int main()
{
    cin >> a >> b >> c >> d >> e >> f;

    int x;
    int y;

    x = find_x(a, b, c, d, e, f);
    y = find_y(a, b, c, d, e, f);

    cout << x << ' ' << y;

    return 0;
}