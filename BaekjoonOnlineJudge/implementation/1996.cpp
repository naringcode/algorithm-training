#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

char board[1004][1004];
int  res[1004][1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        cin >> board[y][x];

        if (board[y][x] == '.')
            continue;
        
        for (auto [dy, dx] : views::cartesian_product(views::iota(-1, 2), views::iota(-1, 2)))
        {
            int ny = y + dy;
            int nx = x + dx;

            if (ny < 0 || ny >= n || nx < 0 || nx >= n)
                continue;

            res[ny][nx] += board[y][x] - '0';
        }
    }

    for (int y : views::iota(0, n))
    {
        for (int x : views::iota(0, n))
        {
            if (board[y][x] != '.')
            {
                print("*");
        
                continue;
            }

            if (res[y][x] >= 10)
            {
                print("M");
            }
            else
            {
                print("{}", res[y][x]);
            }
        }

        println("");
    }

    return 0;
}
