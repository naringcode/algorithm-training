#include <bits/stdc++.h>

using namespace std;

int dy[]{ -1, 0, 1, 0 };
int dx[]{ 0, 1, 0, -1};

int  visited[2][104][104];
bool labbered = false;
bool exited = false;

int solution(vector<string> maps) {
    int ret = 0;
    
    const int w = maps[0].size();
    const int h = maps.size();
    
    queue<pair<int, int>> startQ;
    queue<pair<int, int>> labberQ;
    
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            visited[0][y][x] = -1;
            visited[1][y][x] = -1;
            
            if (maps[y][x] == 'S')
            {
                startQ.push({ y, x });
                visited[0][y][x] = 0;
            }
            else if (maps[y][x] == 'L')
            {
                labberQ.push({ y, x });
                visited[1][y][x] = 0;
            }
        }
    }
    
    while (startQ.size() > 0 && labbered == false)
    {
        auto [y, x] = startQ.front();
        startQ.pop();
        
        for (int dir = 0; dir < 4; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            
            if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;
            
            if (visited[0][ny][nx] != -1)
                continue;
            
            if (maps[ny][nx] == 'X')
                continue;
            
            if (maps[ny][nx] == 'L')
            {
                labbered = true;
                
                ret = visited[0][y][x] + 1;
                
                break;
            }
            
            startQ.push({ ny, nx });
            visited[0][ny][nx] = visited[0][y][x] + 1;
        }
    }
    
    while (labberQ.size() > 0 && exited == false)
    {
        auto [y, x] = labberQ.front();
        labberQ.pop();
        
        for (int dir = 0; dir < 4; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            
            if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;
            
            if (visited[1][ny][nx] != -1)
                continue;
            
            if (maps[ny][nx] == 'X')
                continue;
            
            if (maps[ny][nx] == 'E')
            {
                exited = true;
                
                ret += visited[1][y][x] + 1;
                
                break;
            }
            
            labberQ.push({ ny, nx });
            visited[1][ny][nx] = visited[1][y][x] + 1;
        }
    }
    
    if (labbered == false || exited == false)
        return -1;
    
    return ret;
}
