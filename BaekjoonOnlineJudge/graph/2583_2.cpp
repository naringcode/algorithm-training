#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int  arr[104][104];
bool visited[104][104];

int m;
int n;
int k;

vector<int> vec;
int res = 0;

int dfs(int y, int x)
{
    int res = 1;

    visited[y][x] = true;

    for (int idx = 0; idx < 4; idx++)
    {
        int ny = y + dy[idx];
        int nx = x + dx[idx];

        if (ny < 0 || nx < 0 || ny >= m || nx >= n)
            continue;

        if (1 == arr[ny][nx])
            continue;

        if (true == visited[ny][nx])
            continue;

        res += dfs(ny, nx);
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n >> k;

    for (int i = 0; i < k; i++)
    {
        pair<int, int> sp;
        pair<int, int> ep;

        cin >> sp.first >> sp.second;
        cin >> ep.first >> ep.second;

        for (int y = sp.second; y < ep.second; y++)
        {
            for (int x = sp.first; x < ep.first; x++)
            {
                arr[y][x] = 1;    
            }
        }
    }

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (0 == arr[y][x] && false == visited[y][x])
            {
                res = dfs(y, x);

                vec.push_back(res);
            }
        }
    }

    sort(vec.begin(), vec.end());

    cout << vec.size() << '\n';

    for (int elem : vec)
    {
        cout << elem << ' ';
    }
    
    return 0;
}