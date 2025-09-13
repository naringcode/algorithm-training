#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string, set<string>> mpReportSet;
    map<string, int> mpReportCnt;
    
    for (int i = 0; i < report.size(); i++)
    {
        stringstream ss{ report[i] };
        
        string reporter;
        string reportee;
        
        ss >> reporter >> reportee;
        
        auto& reportSet = mpReportSet[reporter];
        
        if (auto iter = reportSet.find(reportee); iter == reportSet.end())
        {
            reportSet.insert(reportee);
            mpReportCnt[reportee]++;
        }
    }
    
    vector<int> ret(id_list.size());
    
    for (int i = 0; i < id_list.size(); i++)
    {
        auto& reportSet = mpReportSet[id_list[i]];
        
        for (const string& str : reportSet)
        {
            if (mpReportCnt[str] >= k)
            {
                ret[i]++;
            }
        }
    }
    
    return ret;
}
