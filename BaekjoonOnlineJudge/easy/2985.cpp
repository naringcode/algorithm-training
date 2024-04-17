#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

char binaryOpA;
char binaryOpB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    if (a + b == c)
    {
        binaryOpA = '+';
        binaryOpB = '=';
    }
    else if (a - b == c)
    {
        binaryOpA = '-';
        binaryOpB = '=';
    }
    else if (a * b == c)
    {
        binaryOpA = '*';
        binaryOpB = '=';
    }
    else if (a / b == c)
    {
        binaryOpA = '/';
        binaryOpB = '=';
    }
    else if (a == b + c)
    {
        binaryOpA = '=';
        binaryOpB = '+';
    }
    else if (a == b - c)
    {
        binaryOpA = '=';
        binaryOpB = '-';
    }
    else if (a == b * c)
    {
        binaryOpA = '=';
        binaryOpB = '*';
    }
    else if (a == b / c)
    {
        binaryOpA = '=';
        binaryOpB = '/';
    }

    cout << a << binaryOpA << b << binaryOpB << c;

    return 0;
}
