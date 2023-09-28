#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int dy[] = { 1, 0, -1, 0 };
int dx[] = { 0, 1, 0, -1 };

int dir;

int currX;
int currY;

bool visited[104][104];

int res;

int main()
{
    cin >> n >> m;
    
    visited[0][0] = true;
    
    while (true)
    {
        int ny = currY + dy[dir];
        int nx = currX + dx[dir];
        
        if (ny < 0 || nx < 0 || ny >= m || nx >= n || true == visited[ny][nx])
        {
            dir = (dir + 1) % 4;
            
            ny = currY + dy[dir];
            nx = currX + dx[dir];
            
            if (ny < 0 || nx < 0 || ny >= m || nx >= n || true == visited[ny][nx])
            {
                break;
            }
            
            res++;
        }
        
        visited[ny][nx] = true;
        
        currY = ny;
        currX = nx;
    }
    
    cout << res;
    
    return 0;
}
