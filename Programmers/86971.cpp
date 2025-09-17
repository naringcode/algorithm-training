#include <bits/stdc++.h>

using namespace std;

vector<int> adjs[104];
bool visited[104];

void clear(int n)
{
    for (int i = 1; i <= n; i++)
    {
        adjs[i].clear();
        visited[i] = false;
    }
}

int go(int idx)
{
    if (visited[idx] == true)
        return 0;
    
    visited[idx] = true;
    
    int ret = 1;
    
    for (int adj : adjs[idx])
    {
        ret += go(adj);
    }
    
    return ret;
}

int solution(int n, vector<vector<int>> wires) {
    int ret = 999'999'999;
    
    for (int i = 0; i < wires.size(); i++)
    {
        clear(n);
        
        for (int j = 0; j < wires.size(); j++)
        {
            if (i == j)
                continue;
            
            adjs[wires[j][0]].push_back(wires[j][1]);
            adjs[wires[j][1]].push_back(wires[j][0]);
        }
        
        vector<int> vec;
        
        for (int j = 1; j <= n; j++)
        {
            if (visited[j] == false)
            {
                vec.push_back(go(j));
            }
        }
        
        ret = min(ret, abs(vec[0] - vec[1]));
    }
    
    return ret;
}
