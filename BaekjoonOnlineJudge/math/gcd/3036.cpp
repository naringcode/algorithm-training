#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int a;
int b;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> a;

    for (int i : views::iota(1, n))
    {
        cin >> b;

        int temp = gcd(a, b);

        println("{}/{}", a / temp, b / temp);
    }

    return 0;
}
