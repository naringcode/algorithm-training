#include <bits/stdc++.h>

using namespace std;

int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int n;
int m;
int k;

int yangbun[14][14];
int yearlyYangbun[14][14];

vector<int> trees[14][14];

int res;

void go_spring_summer()
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            vector<int> vec;

            int dieYangbun = 0;

            for (auto elem : trees[y][x])
            {
                if (yangbun[y][x] - elem >= 0)
                {
                    yangbun[y][x] -= elem;

                    vec.push_back(elem + 1);
                }
                else
                {
                    dieYangbun += elem / 2;
                }
            }

            trees[y][x] = vec;

            yangbun[y][x] += dieYangbun;
        }
    }
}

void go_fall()
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            for (auto elem : trees[y][x])
            {
                if (0 == elem % 5)
                {
                    for (int dir = 0; dir < 8; dir++)
                    {
                        int ny = y + dy[dir];
                        int nx = x + dx[dir];

                        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                            continue;

                        trees[ny][nx].push_back(1);
                    }
                }
            }
        }
    }
}

void go_winter()
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            yangbun[y][x] += yearlyYangbun[y][x];

            sort(trees[y][x].begin(), trees[y][x].end());
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            yangbun[y][x] = 5;

            cin >> yearlyYangbun[y][x];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        int y;
        int z;

        cin >> x >> y >> z;

        x--;
        y--;

        // trees[y][x].push_back(z);
        trees[x][y].push_back(z);
    }

    // 최초 정렬
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            sort(trees[y][x].begin(), trees[y][x].end());
        }
    }

    // 시뮬레이션
    for (int i = 0; i < k; i++)
    {
        go_spring_summer();
        go_fall();
        go_winter();
    }
    
    // 결과
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            res += trees[y][x].size();
        }
    }

    cout << res;

    return 0;
}