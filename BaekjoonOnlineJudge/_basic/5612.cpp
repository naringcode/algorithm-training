#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> m;

    mx = m;

    for (int i : views::iota(0, n))
    {
        int a;
        int b;

        cin >> a >> b;

        m += (a - b);

        if (m < 0)
        {
            mx = 0;

            break;
        }

        mx = max(mx, m);
    }

    println("{}", mx);

    return 0;
}
