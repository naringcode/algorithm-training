#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[10][10];

bool found;

void go(int y, int x)
{
    if (found == true)
        return;

    if (arr[y][x] == -1)
    {
        found = true;

        return;
    }

    if (arr[y][x] == 0)
        return;

    int ny = y + arr[y][x];
    int nx = x + arr[y][x];

    if (x < n && ny < n)
    {
        go(ny, x);
    }

    if (y < n && nx < n)
    {
        go(y, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        cin >> arr[y][x];
    }

    go(0, 0);

    if (found == true)
    {
        println("HaruHaru");
    }
    else
    {
        println("Hing");
    }

    return 0;
}
