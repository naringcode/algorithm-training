#include <iostream>

using namespace std;

int a1, a0;
int c;
int n0;

// a1과 c는 기울기
// 만족해야 하는 것은 "모든 n"
// a1의 기울기가 c보다 크다면 어느 지점을 기점으로 "모든 n"을 만족하지 않게 된다.

int main()
{
    cin >> a1 >> a0 >> c >> n0;

    if (a1 * n0 + a0 <= c * n0 && a1 <= c)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
