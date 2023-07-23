#include <bits/stdc++.h>

using namespace std;

constexpr int NO_ITEM = -999'999'999;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;
int m;
int t;

int x;
int d;
int k;

int sum;
int remaining;

int arr[54][54];
int temp[54][54];

int res;

// 번호가 x의 배수인 원판을 d방향으로 k칸 회전시킨다.
// d가 0이면 시계 방향, 1이면 반시계 방향
//
// 회전 후
// 인접한 같은 수가 있으면 모두 지운다.
// 없다면 원판에 적힌 수의 평균을 구하고 평균보다 큰 수는 1을 빼고, 작은 수는 1을 더한다.
//
// 좌우상하 인접

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> t;

    remaining = n * m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            sum += arr[i][j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        cin >> x >> d >> k;

        vector<int> rotN;

        for (int j = x; j <= n; j += x)
        {
            rotN.push_back(j - 1);
        }

        // 회전
        for (int elem : rotN)
        {
            if (0 == d) // 시계
            {
                rotate(arr[elem], arr[elem] + m - k, arr[elem] + m);
            }
            else // 반시계
            {
                rotate(arr[elem], arr[elem] + k, arr[elem] + m);
            }
        }

        // 지울 요소 찾기
        memset(temp, 0, sizeof(temp));

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (NO_ITEM == arr[y][x])
                    continue;

                for (int dir = 0; dir < 4; dir++)
                {
                    int ny = y + dy[dir];
                    int nx = (x + dx[dir] + m) % m;
                    
                    if (ny < 0 || ny >= n)
                        continue;

                    if (arr[y][x] == arr[ny][nx])
                    {
                        temp[y][x]   = 1;
                        temp[ny][nx] = 1;
                    }
                }
            }
        }

        // 지우는 작업
        bool flag = false;

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (0 == temp[y][x])
                    continue;

                sum -= arr[y][x];
                remaining--;

                arr[y][x] = NO_ITEM;

                flag = true;
            }
        }

        // 지울 요소가 없다
        if (false == flag)
        {
            int temp = sum;

            for (int y = 0; y < n; y++)
            {
                for (int x = 0; x < m; x++)
                {
                    if (NO_ITEM == arr[y][x])
                        continue;

                    if (temp < arr[y][x] * remaining)
                    {
                        arr[y][x]--;

                        sum--;
                    }
                    else if (temp > arr[y][x] * remaining)
                    {
                        arr[y][x]++;

                        sum++;
                    }
                }
            }
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (NO_ITEM == arr[y][x])
                continue;

            res += arr[y][x];
        }
    }

    cout << res;

    return 0;
}