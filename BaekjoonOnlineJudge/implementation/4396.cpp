#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

char arr[14][14];
bool chk[14][14];

int res[14][14];

int dy[]{ -1, -1, 0, 1, 1, 1, 0, -1 };
int dx[]{ 0, 1, 1, 1, 0, -1, -1, -1 };

bool jirai = false;

void go(int y, int x)
{
    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || ny >= n || nx < 0 || nx >= n)
            continue;

        if (arr[ny][nx] == '*')
        {
            res[y][x]++;
        }
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

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        char temp;
        cin >> temp;

        if (temp == 'x')
        {
            chk[y][x] = true;

            if (arr[y][x] == '*')
            {
                jirai = true;
            }
        }
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        go(y, x);
    }

    for (auto y : views::iota(0, n))
    {
        for (int x : views::iota(0, n))
        {
            if (arr[y][x] == '*' && jirai == true)
            {
                print("*");
            }
            else if (chk[y][x] == true)
            {
                print("{}", res[y][x]);
            }
            else
            {
                print(".");
            }
        }

        println("");
    }
    
    return 0;
}
