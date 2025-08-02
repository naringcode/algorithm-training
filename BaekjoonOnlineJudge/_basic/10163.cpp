#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int x;
int y;
int width;
int height;

int grid[1004][1004];
int cnt[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(1, n + 1))
    {
        cin >> x >> y >> width >> height;

        for (auto [ny, nx] : views::cartesian_product(views::iota(y, y + height), views::iota(x, x + width)))
        {
            grid[ny][nx] = i;
        }
    }

    for (auto [ny, nx] : views::cartesian_product(views::iota(0, 1001), views::iota(0, 1001)))
    {
        cnt[grid[ny][nx]]++;
    }

    for (int i : views::iota(1, n + 1))
    {
        println("{}", cnt[i]);
    }

    return 0;
}
