#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        res = 0;

        for (int i : views::iota(1, n + 1) | views::stride(2))
        {
            res += i;
        }

        println("{}", res);
    }

    return 0;
}
