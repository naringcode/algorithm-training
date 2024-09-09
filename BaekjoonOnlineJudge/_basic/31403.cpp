#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

int go(int n)
{
    int res = 0;

    while (n > 0)
    {
        n /= 10;

        res++;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    cout << a + b - c << '\n';
    cout << a * (int)pow(10, go(b)) + b - c;

    return 0;
}
