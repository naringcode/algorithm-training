#include <bits/stdc++.h>

using namespace std;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int  n;

bool visited[54][54];
int  arr[54][54];

int res;
std::vector<int> vec;

int go(int y, int x)
{
    int ret = 1;

    visited[y][x] = true;

    for (int dir = 0; dir < 4; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || nx < 0)
            continue;

        if (visited[ny][nx])
            continue;

        if (0 == arr[ny][nx])
            continue;

        ret += go(ny, nx);
    }

    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    scanf("%d", &n);

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            scanf("%1d", &arr[y][x]);
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (visited[y][x])
                continue;

            if (0 == arr[y][x])
                continue;

            res++;
            vec.push_back(go(y, x));
        }
    }

    cout << vec.size() << '\n';

    std::sort(vec.begin(), vec.end());

    for (int elem : vec)
    {
        cout << elem << '\n';
    }

    return 0;
}
