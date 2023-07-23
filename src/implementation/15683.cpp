#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int n;
int m;

int arr[14][14];
int visited[14][14];

vector<pair<int, int>> cctvs;

int res = 999'999'999;

void go(int idx)
{
    if (cctvs.size() == idx)
    {
        int cnt = 0;

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (0 == arr[y][x] && 0 == visited[y][x])
                {
                    cnt++;
                }
            }
        }

        res = min(res, cnt);
        
        return;
    }

    int y = cctvs[idx].first;
    int x = cctvs[idx].second;

    int type = arr[y][x];

    if (1 == type)
    {
        for (int i = 0; i < 4; i++)
        {
            int ny = y;
            int nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;

                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }

            go(idx + 1);

            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
        }
    }
    else if (2 == type)
    {
        for (int i = 0; i < 2; i++)
        {
            int ny = y;
            int nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[i + 2];
                nx += dx[i + 2];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
            
            go(idx + 1);
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[i + 2];
                nx += dx[i + 2];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
        }
    }
    else if (3 == type)
    {
        for (int i = 0; i < 4; i++)
        {
            int ny = y;
            int nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[(i + 1) % 4];
                nx += dx[(i + 1) % 4];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }

            go(idx + 1);
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[(i + 1) % 4];
                nx += dx[(i + 1) % 4];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
        }
    }
    else if (4 == type)
    {
        for (int i = 0; i < 4; i++)
        {
            int ny = y;
            int nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[(i + 1) % 4];
                nx += dx[(i + 1) % 4];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[(i + 2) % 4];
                nx += dx[(i + 2) % 4];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
            
            go(idx + 1);
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;

                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[(i + 1) % 4];
                nx += dx[(i + 1) % 4];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
            
            ny = y;
            nx = x;

            while (true)
            {
                ny += dy[(i + 2) % 4];
                nx += dx[(i + 2) % 4];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
        }
    }
    else if (5 == type)
    {
        for (int i = 0; i < 4; i++)
        {
            int ny = y;
            int nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]++;
            }
        }

        go(idx + 1);

        for (int i = 0; i < 4; i++)
        {
            int ny = y;
            int nx = x;

            while (true)
            {
                ny += dy[i];
                nx += dx[i];

                if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    break;
                    
                if (6 == arr[ny][nx])
                    break;

                visited[ny][nx]--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];

            if (1 <= arr[y][x] && arr[y][x] <= 5)
            {
                cctvs.push_back({ y, x });
            }
        }
    }

    go(0);

    cout << res;

    return 0;
}