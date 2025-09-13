#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    map<string, int> mpNameIdx;
    vector<pair<int, int>> totalVec;
    vector<vector<pair<int, int>>> playVec;
    
    for (int i = 0; i < genres.size(); i++)
    {
        if (auto iter = mpNameIdx.find(genres[i]);
            iter == mpNameIdx.end())
        {
            int idx = mpNameIdx.size();
            
            mpNameIdx[genres[i]] = idx;
            totalVec.push_back({ 0, idx });
            playVec.emplace_back();
        }
        
        int idx = mpNameIdx[genres[i]];
        
        totalVec[idx].first += plays[i];
        playVec[idx].push_back({ -plays[i], i });
    }
    
    sort(totalVec.begin(), totalVec.end(), greater{ });
    
    vector<int> ret;
    
    for (auto& [totalTime, idx] : totalVec)
    {
        sort(playVec[idx].begin(), playVec[idx].end());
        
        int cnt = min(2, (int)playVec[idx].size());
        
        for (int j = 0; j < cnt; j++)
        {
            ret.push_back(playVec[idx][j].second);
        }
    }
    
    return ret;
}
