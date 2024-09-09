#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;
int c;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (0 != n % 10)
    {
        cout << -1;

        return 0;
    }

    a = n / 300;
    n %= 300;

    b = n / 60;
    n %= 60;

    c = n / 10;

    cout << a << ' ' << b << ' ' << c;

    return 0;
}
