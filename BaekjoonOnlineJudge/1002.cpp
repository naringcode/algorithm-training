#include<bits/stdc++.h>

using namespace std;

int x11, y11, r11;
int x22, y22, r22;

int dist;

int t;

// int 픽셀의 개수를 구하는 것이 아니라 내접, 외접 문제이다.
int rAddPow;
int rSubPow;

int main()
{
    cin >> t;

    while (t--)
    {
        cin >> x11 >> y11 >> r11;
        cin >> x22 >> y22 >> r22;

        x11 -= x22;
        y11 -= y22;

        x11 *= x11;
        y11 *= y11;

        // sqrt 대신 제곱한 값 그대로 쓴다(실수 연산은 오차를 만든다)
        dist = x11 + y11;

        rAddPow = r11 + r22;
        rAddPow *= rAddPow;

        rSubPow = r11 - r22;
        rSubPow *= rSubPow;

        if (dist == 0 && r11 == r22) // 동심원에 반지름이 같으면
        {
            cout << -1 << '\n';
        }
        else if (dist > rAddPow || dist < rSubPow) // 만나지 않는 조건
        {
            cout << 0 << '\n';
        }
        else if (dist == rAddPow || dist == rSubPow) // 외접, 내접
        {
            cout << 1 << '\n';
        }
        else // 그 외라면?
        {
            cout << 2 << '\n';
        }
    }

    return 0;
}
