#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define y1 yy1

int y1;
int m1;
int d1;

int y2;
int m2;
int d2;

int res1;
int res2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    res2 = y2 - y1;
    res1 = res2 - 1;

    if (m1 < m2)
    {
        res1++;
    }
    if (m1 == m2 && d1 <= d2)
    {
        res1++;
    }

    cout << res1 << '\n';
    cout << res2 + 1 << '\n';
    cout << res2 << '\n';

    return 0;
}
