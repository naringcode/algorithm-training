#include <bits/stdc++.h>

using namespace std;

// Sn = n(a + l) / 2
//
// Sn = n(a + a + n - 1) / 2 --- l = a + n - 1
//
// Sn = n(2a + n - 1) / 2
//
// 2Sn = n(2a + n - 1)
//
// 2Sn = 2na + n * n - n
//
// 2Sn - n * n + n = 2na
//
// 2na = 2Sn - n * n + n
//
// a = (2Sn - n * n + n) / 2n
//
// 실수 판단 : (2Sn - n * n + n) mod 2n != 0

int n;
int l;

int a;
int cnt = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;

    if (l > 100)
    {
        cout << -1;

        return 0;
    }

    for (int i = l; i <= 100; i++)
    {
        a = 2 * n - i * i + i;

        if (a % (2 * i) != 0)
            continue;

        a   = a / (2 * i);
        cnt = i;

        break;
    }

    if (-1 == cnt || a < 0)
    {
        cout << -1;

        return 0;
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << a + i << ' ';
    }
    
    return 0;
}
