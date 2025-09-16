#include <bits/stdc++.h>

using namespace std;

const int INF = 999'999'999;

int solution(int N, vector<vector<int>> road, int K) {
    vector<vector<pair<int, int>>> adjs(N);
    vector<int> minCosts(N, INF);
    
    for (vector<int>& vec : road)
    {
        adjs[vec[0] - 1].push_back({ vec[1] - 1, vec[2] });
        adjs[vec[1] - 1].push_back({ vec[0] - 1, vec[2] });
    }
    
    priority_queue<pair<int, int>> pq;
    pq.push({ 0, 0 });
    
    minCosts[0] = 0;
    
    while (pq.size() > 0)
    {
        auto [dist, here] = pq.top();
        pq.pop();
        
        dist = -dist;
        
        if (minCosts[here] != dist)
            continue;
        
        for (auto [there, weight] : adjs[here])
        {
            if (minCosts[here] + weight < minCosts[there])
            {
                minCosts[there] = minCosts[here] + weight;
                
                pq.push({ -minCosts[there], there });
            }
        }
    }
    
    int ret = 0;

    for (int cost : minCosts)
    {
        if (cost <= K)
        {
            ret++;
        }
    }

    return ret;
}
