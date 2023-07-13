#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int arr[14][14];
int visited[14][14];

int n;
int wh; // width height

int sum;
int res = 999'999'999;

bool go(int val)
{
    int y = val / wh;
    int x = val % wh;

    visited[y][x] = 1;

    sum += arr[y][x];

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= wh || nx >= wh)
            return false;

        if (visited[ny][nx])
            return false;

        sum += arr[ny][nx];

        visited[ny][nx] = 1;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    wh = n;
    n  = n * n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                memset(visited, 0, sizeof(visited));
                sum = 0;

                if (false == go(i))
                    continue;

                if (false == go(j))
                    continue;

                if (false == go(k))
                    continue;

                // cout << sum
                //      << " : { " << i / wh << ", " << i % wh << " }"
                //      << " : { " << j / wh << ", " << j % wh << " }"
                //      << " : { " << k / wh << ", " << k % wh << " }" << '\n';

                res = min(res, sum);
            }
        }
    }

    cout << res;

    return 0;
}