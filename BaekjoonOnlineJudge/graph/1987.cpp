#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 24;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

char arr[MAX][MAX];
int  visited[MAX][MAX];

int r;
int c;

bool alphabets[26];

int res = 0;

void dfs(int y, int x, int depth)
{
    if (true == alphabets[arr[y][x] - 'A'])
        return;

    res = max(res, depth);

    alphabets[arr[y][x] - 'A'] = true;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= r || nx >= c)
            continue;

        if (visited[ny][nx])
            continue;

        visited[ny][nx] = true;

        dfs(ny, nx, depth + 1);

        visited[ny][nx] = false;
    }

    alphabets[arr[y][x] - 'A'] = false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c;

    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            cin >> arr[y][x];
        }
    }

    visited[0][0] = true;

    dfs(0, 0, 1); // 배치하는 것도 움직인다고 취급하는지 체크(확인용 주석)

    cout << res;

    return 0;
}
