#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int solution(int n, vector<int> weak, vector<int> dist) {
    int ret = INF;

    int len = weak.size();
    for (int idx = 0; idx < len; idx++)
    {
        weak.push_back(n + weak[idx]);
    }
    
    sort(dist.begin(), dist.end());
        
    for (int i = 0; i < len; i++)
    {
        do
        {
            int cnt = 1;
            int endPos = weak[i] + dist[0];
            
            for (int idx = i; idx < i + len; idx++)
            {
                if (endPos >= weak[idx])
                    continue;
                    
                cnt++;
                
                if (cnt > dist.size())
                    break;
                
                endPos = weak[idx] + dist[cnt - 1];
            }
            
            ret = min(ret, cnt);
            
        } while (next_permutation(dist.begin(), dist.end()));
    }
    
    if (ret > dist.size())
        return -1;
    
    return ret;
}
