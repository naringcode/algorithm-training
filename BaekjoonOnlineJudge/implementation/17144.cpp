#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int arr[54][54];

// y (x는 0으로 고정)
vector<int> filter;

// 위치, 미세먼지
vector<pair<int, int>> spreadVec;

// from, to
vector<pair<int, int>> atmos;

int r;
int c;
int t;

int res;

void make_atmos()
{
    int hereX = 0;
    int hereY = filter[0] - 1;

    int thereX = hereX;
    int thereY = hereY - 1;

    // 첫 번째
    while (0 <= thereY)
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereY = thereY;
        thereY--;
    }

    thereY = 0;
    thereX = 1;

    while (thereX < c)
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereX = thereX;
        thereX++;
    }

    thereX = c - 1;
    thereY = 1;

    while (thereY <= filter[0])
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereY = thereY;
        thereY++;
    }

    thereY = filter[0];
    thereX = c - 2;

    while (thereX > 0)
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereX = thereX;
        thereX--;
    }

    // 두 번째
    hereX = 0;
    hereY = filter[1] + 1;

    thereX = hereX;
    thereY = hereY + 1;

    while (thereY < r)
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereY = thereY;
        thereY++;
    }

    thereY = r - 1;
    thereX = 1;

    while (thereX < c)
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereX = thereX;
        thereX++;
    }

    thereX = c - 1;
    thereY = r - 2;

    while (thereY >= filter[1])
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereY = thereY;
        thereY--;
    }

    thereY = filter[1];
    thereX = c - 2;

    while (thereX > 0)
    {
        atmos.push_back({ thereY * c + thereX, hereY * c + hereX });

        hereX = thereX;
        thereX--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c >> t;

    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            cin >> arr[y][x];

            if (-1 == arr[y][x])
            {
                filter.push_back(y);
            }
        }
    }

    make_atmos();

    for (int i = 0; i < t; i++)
    {
        spreadVec.clear();

        for (int y = 0; y < r; y++)
        {
            for (int x = 0; x < c; x++)
            {
                if (arr[y][x] > 0)
                {
                    spreadVec.push_back({ y * c + x, arr[y][x]});
                }
            }
        }

        // 확산
        for (auto& pair : spreadVec)
        {
            int y = pair.first / c;
            int x = pair.first % c;

            int amount = pair.second / 5;

            for (int idx = 0; idx < 4; idx++)
            {
                int ny = y + dy[idx];
                int nx = x + dx[idx];

                if (ny < 0 || nx < 0 || ny >= r || nx >= c)
                    continue;

                if (ny == filter[0] && nx == 0)
                    continue;
                    
                if (ny == filter[1] && nx == 0)
                    continue;

                arr[ny][nx] += amount;

                arr[y][x] -= amount;
            }
        }

        arr[filter[0] - 1][0] = 0;
        arr[filter[1] + 1][0] = 0;

        for (auto& pair : atmos)
        {
            int y = pair.first / c;
            int x = pair.first % c;

            int ny = pair.second / c;
            int nx = pair.second % c;

            arr[ny][nx] = arr[y][x];
        }
        
        arr[filter[0]][1] = 0;
        arr[filter[1]][1] = 0;

        // cout << '\n';
        
        // for (int y = 0; y < r; y++)
        // {
        //     for (int x = 0; x < c; x++)
        //     {
        //         cout << arr[y][x] << ' ';
        //     }

        //     cout << '\n';
        // }
    }

    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            if (0 < arr[y][x])
            {
                res += arr[y][x];
            }
        }
    }

    cout << res;

    return 0;
}