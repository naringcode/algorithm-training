#include <bits/stdc++.h>

using namespace std;

int l;
int p;
int v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; ; i++)
    {
        cin >> l >> p >> v;

        if (0 == l && 0 == p && 0 == v)
            break;

        // p일 중 l일 동안 사용 가능
        // 휴가는 총 v일
        int quotient  = v / p;
        int remainder = v % p;

        int res = l * quotient + min(l, remainder);

        cout << "Case " << i << ": " << res << '\n';
    }

    return 0;
}
