#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        int res = 0;

        for (auto [x, y, z] : views::cartesian_product(
                                    views::iota(1, a + 1),
                                    views::iota(1, b + 1),
                                    views::iota(1, c + 1)))
        {
            if ((x % y == y % z) && (y % z == z % x))
            {
                res++;
            }
        }

        println("{}", res);
    }

    return 0;
}
