#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int r;
int c;

char board[254][254];
bool visited[254][254];

int sheep;
int wolves;

pair<int, int> go(int y, int x)
{
    int retSheep  = board[y][x] == 'k' ? 1 : 0;
    int retWolves = board[y][x] == 'v' ? 1 : 0;

    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= r || nx >= c)
            continue;
            
        if (board[ny][nx] == '#')
            continue;

        if (visited[ny][nx] == true)
            continue;

        visited[ny][nx] = true;

        auto [tempS, tempW] = go(ny, nx);

        retSheep  += tempS;
        retWolves += tempW;
    }

    return { retSheep, retWolves };
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c;

    for (auto [y, x] : views::cartesian_product(views::iota(0, r), views::iota(0, c)))
    {
        cin >> board[y][x];

        if (board[y][x] == 'v')
        {
            wolves++;
        }
        else if (board[y][x] == 'k')
        {
            sheep++;
        }
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, r), views::iota(0, c)))
    {
        if (board[y][x] == '#' || visited[y][x] == true)
            continue;

        visited[y][x] = true;

        auto [tempS, tempW] = go(y, x);

        if (tempS > tempW)
        {
            wolves -= tempW;
        }
        else
        {
            sheep -= tempS;
        }
    }

    println("{} {}", sheep, wolves);

    return 0;
}
