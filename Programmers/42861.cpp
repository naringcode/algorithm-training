#include <bits/stdc++.h>

using namespace std;

int disjointSet[104];

int doFind(int here)
{
    if (here == disjointSet[here])
        return here;
    
    disjointSet[here] = doFind(disjointSet[here]);
    
    return disjointSet[here];
}

bool doUnion(int x, int y)
{
    x = doFind(x);
    y = doFind(y);
    
    if (x == y)
        return false;
    
    disjointSet[y] = x;
    
    return true;
}

int solution(int n, vector<vector<int>> costs) {
    priority_queue<tuple<int, int, int>> pq;
    int ret = 0;
    
    for (int i = 0; i < n; i++)
    {
        disjointSet[i] = i;
    }
    
    for (auto& vec : costs)
    {
        pq.push({ -vec[2], vec[0], vec[1] });
    }
    
    while (pq.size() > 0)
    {
        auto [cost, from, to] = pq.top();
        pq.pop();
        
        if (doUnion(from, to))
        {
            ret += -cost;
        }
    }
    
    return ret;
}
