#include <bits/stdc++.h>

// 완전 탐색으로 적용했을 때 어떤 것이 묶여야 하는지 테스트하기 위한 용도
// 제출하면 시간초과 남

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int t;

int n;
int w;

int arr[2][10004];
int visited[2][10004];

int cnt;
int res = 999'999'999;

vector<pair<int, int>> vec;

void go(int y, int x)
{
    if (n == x)
    {
        x = 0;

        y++;
    }

    if (2 == y)
    {
        if (12 == cnt)
        {
            for (auto& pair : vec)
            {
                cout << "{ " << pair.first << ", " << pair.second << " } ";
            }
            
            cout << ": " << cnt << '\n';
        }

        res = min(cnt, res);

        return;
    }

    if (visited[y][x])
    {
        go(y, x + 1);

        return;
    }

    cnt++;

    visited[y][x] = 1;

    for (int dir = 0; dir < 4; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0 || ny >= 2 || nx >= n)
            continue;

        if (visited[ny][nx])
            continue;

        if (arr[y][x] + arr[ny][nx] > w)
            continue;

        visited[ny][nx] = 1;

        vec.push_back({ y * n + x, ny * n + nx });

        go(y, x + 1);

        vec.pop_back();

        visited[ny][nx] = 0;
    }

    visited[y][x] = 0;

    // vec.push_back({ y * n + x + 1, 0 });

    go(y, x + 1);

    cnt--;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        cin >> n >> w;

        res = 999'999'999;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[0][i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[1][i];
        }

        go(0, 0);

        cout << res << '\n';
    }

    return 0;
}