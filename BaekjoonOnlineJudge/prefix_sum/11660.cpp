#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int x1;
int y11;
int x2;
int y2;

int arr[1030][1030];
int sum[1030][1030];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(1, n + 1), views::iota(1, n + 1)))
    {
        cin >> arr[y][x];
    }

    for (auto [y, x] : views::cartesian_product(views::iota(1, n + 1), views::iota(0, n + 1)))
    {
        sum[y][x] = arr[y][x] + sum[y][x - 1];
    }

    for (int cnt : views::iota(0, m))
    {
        cin >> y11 >> x1 >> y2 >> x2;

        res = 0;

        for (auto y : views::iota(y11, y2 + 1))
        {
            res += sum[y][x2] - sum[y][x1 - 1];
        }

        println("{}", res);
    }

    return 0;
}
