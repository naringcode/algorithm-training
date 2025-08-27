#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int h;
int w;
int x;
int y;

int arr[604][604];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> w >> x >> y;

    for (auto [yy, xx] : views::cartesian_product(views::iota(0, h + x), views::iota(0, w + y)))
    {
        cin >> arr[yy][xx];
    }

    for (auto [yy, xx] : views::cartesian_product(views::iota(x, h), views::iota(y, w)))
    {
        arr[yy][xx] -= arr[yy - x][xx - y];
    }

    for (int yy : views::iota(0, h))
    {
        for (int xx : views::iota(0, w))
        {
            print("{} ", arr[yy][xx]);
        }
        
        println("");
    }

    return 0;
}
