#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    unordered_map<string, int> mpNameIdx;
    vector<int> parents(enroll.size(), -1);
    vector<int> profits(enroll.size(), 0);
    
    for (int idx = 0; idx < enroll.size(); idx++)
    {
        mpNameIdx[enroll[idx]] = idx;
    }
    
    for (int idx = 0; idx < referral.size(); idx++)
    {
        if (referral[idx] == "-")
            continue;
        
        int parentIdx = mpNameIdx[referral[idx]];
        parents[idx] = parentIdx;
    }
    
    for (int idx = 0; idx < seller.size(); idx++)
    {
        int myIdx  = mpNameIdx[seller[idx]];
        int profit = amount[idx] * 100;

        profits[myIdx] += profit;

        while (profit != 0)
        {
            int parentProfit = profit / 10;
            profits[myIdx] -= parentProfit;

            int parentIdx = parents[myIdx];
            if (parentIdx == -1)
                break;
                
            profits[parentIdx] += parentProfit;

            myIdx  = parentIdx;
            profit = parentProfit;
        }
    }
    
    return profits;
}
