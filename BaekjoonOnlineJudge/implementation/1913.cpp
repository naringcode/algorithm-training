#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[4]{ 1, 0, -1, 0 };
const int dx[4]{ 0, 1, 0, -1 };

int dir;

int n;
int found;

int arr[1004][1004];
int cnt;

int resY;
int resX;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> found;

    cnt = n * n;

    int y = 0;
    int x = 0;

    while (cnt > 0)
    {
        arr[y][x] = cnt;

        if (arr[y][x] == found)
        {
            resY = y + 1;
            resX = x + 1;
        }

        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || ny >= n || nx < 0 || nx >= n ||
            arr[ny][nx] != 0)
        {
            dir = (dir + 1) % 4;

            ny = y + dy[dir];
            nx = x + dx[dir];
        }

        y = ny;
        x = nx;

        cnt--;
    }

    for (int y : views::iota(0, n))
    {
        for (int x : views::iota(0, n))
        {
            print("{} ", arr[y][x]);
        }

        println("");
    }

    println("{} {}", resY, resX);

    return 0;
}
