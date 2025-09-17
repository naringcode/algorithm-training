#include <bits/stdc++.h>

using namespace std;

const int INF = 999'999'999;

int dy[]{ -1, 0, 1, 0 };
int dx[]{ 0, 1, 0, -1 };

int visited[4][30][30];
int res = INF;

int solution(vector<vector<int>> board) {
    int height = board.size();
    int width  = board[0].size();
    
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < height; x++)
        {
            for (int dir = 0; dir < 4; dir++)
            {
                visited[dir][y][x] = INF;   
            }
        }
    }
    
    // y, x, dir
    queue<tuple<int, int, int>> q;
    
    q.push({ 0, 0, 1 }); // r
    q.push({ 0, 0, 2 }); // b
    
    visited[1][0][0] = 0;
    visited[2][0][0] = 0;
    
    while (q.size() > 0)
    {
        auto [y, x, dir] = q.front();
        q.pop();
        
        int prevCost = visited[dir][y][x];
        
        for (int newDir = 0; newDir < 4; newDir++)
        {
            int ny = y + dy[newDir];
            int nx = x + dx[newDir];
            
            if (ny < 0 || nx < 0 || ny >= height || nx >= width)
                continue;
            
            if (board[ny][nx] == 1)
                continue;
            
            int nextCost = prevCost + 100;
            
            if (dir != newDir)
            {
                nextCost += 500;
            }
            
            if (nextCost < visited[newDir][ny][nx])
            {
                visited[newDir][ny][nx] = nextCost;
                
                q.push({ ny, nx, newDir });
            }
        }
    }
    
    for (int dir = 0; dir < 4; dir++)
    {
        if (visited[dir][height - 1][width - 1] == INF)
            continue;
        
        res = min(res, visited[dir][height - 1][width - 1]);   
    }
    
    return res;
}
