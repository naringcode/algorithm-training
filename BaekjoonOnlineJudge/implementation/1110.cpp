#include <bits/stdc++.h>

using namespace std;

int n;
int num;

int temp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n < 10)
    {
        num = n;
    }
    else
    {
        temp = n / 10;
        temp += n % 10;

        temp %= 10;

        num = n * 10;
        num += temp;

        num %= 100;
    }

    if (n == num)
    {
        temp = num / 10;
        temp += num % 10;

        temp %= 10;

        num = num * 10;
        num += temp;

        num %= 100;
    }

    res++;

    while (n != num)
    {
        temp = num / 10;
        temp += num % 10;

        temp %= 10;

        num = num * 10;
        num += temp;

        num %= 100;

        res++;
    }

    cout << res;

    return 0;
}