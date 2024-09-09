#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int num;

int main()
{
    cin >> num;

    if (1010 == num)
    {
        cout << 20;
    }
    else if (num > 100)
    {
        if (num % 100 < 10)
        {
            cout << num / 10 + num % 10;
        }
        else
        {
            cout << num / 100 + num % 100;
        }
    }
    else
    {
        cout << num / 10 + num % 10;
    }

    return 0;
}
