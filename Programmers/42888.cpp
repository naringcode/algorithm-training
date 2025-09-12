#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<pair<string, string>> ops;
    map<string, string> mpNames;
    
    for (string& str : record)
    {
        stringstream ss{ str };
        
        string type;
        string uid;
        string name;
        
        ss >> type >> uid;
        
        if (type == "Enter" || type == "Change")
        {
            ss >> name;
            mpNames[uid] = name;
        }
     
        if (type == "Enter" || type == "Leave")
        {
            ops.push_back({ type, uid });   
        }
    }
    
    vector<string> ret;
    
    for (auto& [type, uid] : ops)
    {   
        string temp = mpNames[uid];
        
        if (type == "Enter")
        {
            temp += "님이 들어왔습니다.";   
        }
        else if (type == "Leave")
        {
            temp += "님이 나갔습니다.";
        }
        
        ret.push_back(temp);
    }
    
    return ret;
}
