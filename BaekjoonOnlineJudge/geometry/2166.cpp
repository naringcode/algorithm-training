#include <bits/stdc++.h>

using namespace std;

// 외적 : x = yz - zy, y = zx - xz, z = xy - yx
// 외적으로 나온 벡터의 길이는 평행사변형의 넓이 -> 2로 나누면 삼각형의 넓이
//
// https://en.wikipedia.org/wiki/Cross_product

// 점과 벡터의 구분 없이 간다
struct Vector2D
{
    long double x;
    long double y;
};

int n;

long double x;
long double y;

Vector2D tail;
Vector2D headA;
Vector2D headB;

vector<Vector2D> vec;

long double res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        vec.push_back({ x, y });
    }

    tail = vec[0];
    headA = vec[1];

    for (int i = 2; i < n; i++)
    {
        headB = vec[i];

        Vector2D vecA = { headA.x - tail.x, headA.y - tail.y };
        Vector2D vecB = { headB.x - tail.x, headB.y - tail.y };

        // res += abs(vecA.x * vecB.y - vecA.y * vecB.x) / 2.0L;
        res += (vecA.x * vecB.y - vecA.y * vecB.x) / 2.0L;

        headA = headB;
    }

    // res /= 2.0L;

    cout << fixed;
    cout.precision(1);

    // cout << res;
    cout << abs(res);

    return 0;
}