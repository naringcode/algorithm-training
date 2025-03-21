#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

char arr[54][54];

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> arr[y][x];
    }

    for (int len : views::iota(1, min(n, m) + 1))
    {
        for (int y = 0; y < n - len; y++)
        {
            for (int x = 0; x < m - len; x++)
            {
                if (arr[y][x] == arr[y + len][x] &&
                    arr[y][x] == arr[y][x + len] &&
                    arr[y][x] == arr[y + len][x + len])
                {
                    res = max(res, (len + 1) * (len + 1));
                }
            }
        }
    }

    println("{}", res);

    return 0;
}
