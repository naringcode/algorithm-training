#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;

int x;
int y;

int resA;
int resB;
int resC;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> x >> y;

    resA = a * x + b * y;

    int tempMin = min(x, y);

    resB = c * (tempMin * 2);
    resB += a * (x - tempMin);
    resB += b * (y - tempMin);

    resC = c * (max(x, y) * 2);

    cout << min(min(resA, resB), resC);

    return 0;
}
