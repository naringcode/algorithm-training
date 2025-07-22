#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    // a^2 = b^2 + n
    for (int a : views::iota(1, 501))
    {
        for (int b : views::iota(1, a + 1))
        {
            if (a * a == (b * b + n))
            {
                res++;
            }
        }
    }

    println("{}", res);

    return 0;
}
