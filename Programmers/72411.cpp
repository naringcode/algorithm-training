#include <bits/stdc++.h>

using namespace std;

map<string, int> mpOrderCnt;

void go(int i, string& order, string& comb)
{
    if (i == order.length())
        return;
    
    for (int idx = i; idx < order.length(); idx++)
    {
        comb += order[idx];    
    
        if (comb.length() >= 2)
        {
            mpOrderCnt[comb]++;   
        }
    
        go(idx + 1, order, comb);
        
        comb.pop_back();
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    for (string& order : orders)
    {
        sort(order.begin(), order.end());
        
        string comb = "";
        
        go(0, order, comb);
    }
    
    vector<string> ret;
    
    for (int i : course)
    {
        int mx = 0;
        
        for (auto& [order, j] : mpOrderCnt)
        {
            if (order.length() == i)
            {
                mx = max(mx, j);
            }
        }
        
        if (mx < 2)
            continue;
        
        for (auto& [order, j] : mpOrderCnt)
        {
            if (order.length() == i && mx == j)
            {
                ret.push_back(order);
            }
        }
    }
    
    sort(ret.begin(), ret.end());
    
    return ret;
}
