#include <bits/stdc++.h>

using namespace std;

int n;
int temp;

int a;
int b;

int digit;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    temp = 10;

    while (temp <= n)
    {
        a = temp / 2;
        b = n % temp;

        n -= b;

        // 올림
        if (a <= b)
        {
            n += temp;
        }

        temp *= 10;
    }

    cout << n;

    return 0;
}