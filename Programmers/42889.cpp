#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool comp(const pair<int, double>& lhs, const pair<int, double>& rhs)
{
    if (lhs.second == rhs.second)
        return lhs.first < rhs.first;
    
    return lhs.second > rhs.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> passes(N + 2, 0);
    vector<int> arrives(N + 2, 0);
    
    for (int stage : stages)
    {
        for (int i = 1; i <= stage; i++)
        {
            passes[i]++;
        }
        
        arrives[stage]++;
    }
    
    vector<pair<int, double>> resTemp;
    
    for (int stage = 1; stage <= N; stage++)
    {
        // cout << (double)arrives[stage] / (double)passes[stage] << '\n';
        
        resTemp.push_back({ stage, 0 });
        
        if (passes[stage] != 0)
        {
            resTemp.back().second = (double)arrives[stage] / (double)passes[stage];
        }
    }
    
    sort(resTemp.begin(), resTemp.end(), comp);
    
    vector<int> answer;
    
    for (const auto& pair : resTemp)
    {
        answer.push_back(pair.first);
    }
    
    return answer;
}