#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

char arr[54][54];
bool chk[54][54];

int res;

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

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        if (chk[y][x] == true)
            continue;

        res++;

        if (arr[y][x] == '-')
        {
            auto takeView = views::iota(x, m) | views::take_while([&](int nx) { return arr[y][nx] == '-'; });

            ranges::for_each(takeView, [&](int nx) {
                chk[y][nx] = true;
            });
        }
        else // if (arr[y][x] == '|')
        {
            auto takeView = views::iota(y, n) | views::take_while([&](int ny) { return arr[ny][x] == '|'; });

            ranges::for_each(takeView, [&](int ny) {
                chk[ny][x] = true;
            });
        }
    }

    println("{}", res);

    return 0;
}
