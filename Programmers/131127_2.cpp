#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    unordered_map<string, int> mp;
    int ret = 0;
    
    for (int idx = 0; idx < want.size(); idx++)
    {
        mp[want[idx]] = number[idx];
    }
    
    for (int cnt = 0; cnt < discount.size() - 9; cnt++)
    {
        unordered_map<string, int> temp;
        
        for (int idx = cnt; idx < cnt + 10; idx++)
        {
            temp[discount[idx]]++;
        }
        
        if (mp == temp)
        {
            ret++;
        }
    }
    
    return ret;
}
