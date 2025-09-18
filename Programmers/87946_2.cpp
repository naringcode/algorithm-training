#include <bits/stdc++.h>

using namespace std;

bool visited[10];

int go(int cnt, int remPiro, vector<vector<int>>& dungeons)
{
    int ret = cnt;
    
    for (int idx = 0; idx < dungeons.size(); idx++)
    {
        if (visited[idx] == true)
            continue;
        
        if (remPiro < dungeons[idx][0])
            continue;
        
        visited[idx] = true;
        
        ret = max(ret, go(cnt + 1, remPiro - dungeons[idx][1], dungeons));
        
        visited[idx] = false;
    }
    
    return ret;
}

int solution(int k, vector<vector<int>> dungeons) {
    int ret = go(0, k, dungeons);
    
    return ret;
}
