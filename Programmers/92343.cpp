#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adjs;
vector<bool> visited;

int res;

void go(vector<int>& info, vector<int> items)
{
    int sheep = 0;
    int wolf  = 0;
    
    for (int elem : items)
    {
        if (info[elem] == 0)
        {
            sheep++;
        }
        else if (info[elem] == 1)
        {
            wolf++;
        }
    }
    
    if (wolf >= sheep)
        return;
    
    res = max(res, sheep);
    
    // for (int here : items) // range-based for를 쓰면 items 갱신 로직 때문에 문제가 생김.
    for (int idx = 0; idx < items.size(); idx++)
    {
        int here = items[idx];

        for (int there : adjs[here])
        {
            if (visited[there] == true)
                continue;
            
            visited[there] = true;
            items.push_back(there);
            
            go(info, items);
            
            visited[there] = false;
            items.pop_back();
        }
    }
}

int solution(vector<int> info, vector<vector<int>> edges) {
    int n = info.size();
    
    adjs.resize(n);
    visited.resize(n, false);
    
    for (vector<int>& edge : edges)
    {
        adjs[edge[0]].push_back(edge[1]);
    }

    visited[0] = true;
    
    go(info, { 0 });
    
    return res;
}
