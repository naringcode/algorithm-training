#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int s;

int curr;
int res;

int gcd(int x, int y)
{
    if (y == 0)
        return x;

    return gcd(y, x % y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> s;
    cin >> curr;

    res = abs(curr - s);

    for (int i : views::iota(1, n))
    {
        int temp = curr;
        cin >> curr;

        res = gcd(res, abs(temp - curr));
    }

    println("{}", res);

    return 0;
}
