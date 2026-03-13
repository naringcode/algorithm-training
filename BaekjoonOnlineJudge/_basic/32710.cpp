#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n >= 1 && n <= 9)
    {
        println("1");

        return 0;
    }

    for (auto [x, y] : views::cartesian_product(views::iota(2, 10), views::iota(1, 10)))
    {
        if (x * y == n)
        {
            println("1");

            return 0;
        }
    }

    println("0");

    return 0;
}
