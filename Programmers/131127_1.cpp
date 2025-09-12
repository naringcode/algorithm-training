#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    map<string, int> mp;
    int ret = 0;
    
    for (int idx = 0; idx < want.size(); idx++)
    {
        mp[want[idx]] = number[idx];
    }
    
    for (int idx = 0; idx < discount.size(); idx++)
    {
        auto pair = mp.find(discount[idx]);
        if (pair != mp.end())
        {
            pair->second--;
        }
        
        if (idx >= 10)
        {
            pair = mp.find(discount[idx - 10]);
            if (pair != mp.end())
            {
                pair->second++;
            }
        }
        
        ret++;
        
        for (auto& [_, cnt] : mp)
        {
            if (cnt > 0)
            {
                ret--;
                
                break;
            }
        }
    }
    
    return ret;
}
