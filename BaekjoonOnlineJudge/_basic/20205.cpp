#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int res[104][104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i : views::iota(0, n))
    {
        for (int j : views::iota(0, n))
        {
            int temp;
            cin >> temp;

            int fromX = j * k;
            int fromY = i * k;

            for (auto [toY, toX] : views::cartesian_product(
                                    views::iota(fromY, fromY + k),
                                    views::iota(fromX, fromX + k)))
            {
                res[toY][toX] = temp;
            }
        }
    }

    for (int y : views::iota(0, n * k))
    {
        for (int x : views::iota(0, n * k))
        {
            print("{} ", res[y][x]);
        }

        println("");
    }

    return 0;
}
