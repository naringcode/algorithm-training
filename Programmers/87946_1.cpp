#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int ret = 0;
    vector<int> idxes;
    
    for (int i = 0; i < dungeons.size(); i++)
    {
        idxes.push_back(i);
    }
    
    do
    {
        int remK = k;
        int cnt  = 0;
        
        for (auto idx : idxes)
        {
            if (remK >= dungeons[idx][0])
            {
                remK -= dungeons[idx][1];
                cnt++;
            }
        }
        
        ret = max(ret, cnt);
        
    } while (next_permutation(idxes.begin(), idxes.end()));
    
    return ret;
}
