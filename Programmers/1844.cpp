#include <bits/stdc++.h>

using namespace std;

int dy[]{ -1, 0, 1, 0 };
int dx[]{ 0, 1, 0, -1 };

int visited[104][104];

int solution(vector<vector<int>> maps)
{
    memset(&visited[0][0], -1, sizeof(visited));
    
    int h = maps.size();
    int w = maps[0].size();
    
    queue<pair<int, int>> q;
    q.push({ 0, 0 });
    
    visited[0][0] = 1;
    
    while (q.size() > 0)
    {
        auto [y, x] = q.front();
        q.pop();
        
        if (y == h - 1 && x == w - 1)
            return visited[y][x];
        
        for (int dir = 0; dir < 4; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            
            if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;
            
            if (maps[ny][nx] == 0)
                continue;
            
            if (visited[ny][nx] != -1)
                continue;
            
            q.push({ ny, nx });
            visited[ny][nx] = visited[y][x] + 1;
        }
    }
    
    return -1;
}
