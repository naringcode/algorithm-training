#include <bits/stdc++.h>

using namespace std;

int x;
int y;

int reverse_num(int num)
{
    int res = 0;

    while (0 != num)
    {
        res *= 10;

        res += num % 10;
        num /= 10;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> y;

    cout << reverse_num(reverse_num(x) + reverse_num(y));

    return 0;
}