#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int n;

char boardA[104][104];
char boardB[104][104];
bool visitedA[104][104];
bool visitedB[104][104];

int resA;
int resB;

void goA(int y, int x)
{
    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            continue;

        if (boardA[ny][nx] != boardA[y][x])
            continue;

        if (visitedA[ny][nx] == true)
            continue;

        visitedA[ny][nx] = true;

        goA(ny, nx);
    }
}

void goB(int y, int x)
{
    for (int dir : views::iota(0, ssize(dy)))
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            continue;

        if (boardB[ny][nx] != boardB[y][x])
            continue;

        if (visitedB[ny][nx] == true)
            continue;

        visitedB[ny][nx] = true;

        goB(ny, nx);
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
        cin >> boardA[y][x];

        if (boardA[y][x] == 'G')
        {
            boardB[y][x] = 'R';
        }
        else
        {
            boardB[y][x] = boardA[y][x];
        }
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        if (visitedA[y][x] == true)
            continue;

        resA++;

        goA(y, x);
    }
    
    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        if (visitedB[y][x] == true)
            continue;

        resB++;

        goB(y, x);
    }

    println("{} {}", resA, resB);

    return 0;
}
