#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> mpNames;
    
    for (string& str : participant)
    {
        mpNames[str]++;
    }
    
    for (string& str : completion)
    {
        mpNames[str]--;
    }
    
    for (auto& [name, cnt] : mpNames)
    {
        if (cnt == 1)
            return name;
    }
    
    return "";
}
