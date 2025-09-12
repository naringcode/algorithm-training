#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    set<string> mySet;
    mySet.insert(words[0]);
    
    for (int idx = 1; idx < words.size(); idx++)
    {
        try
        {
            if (words[idx - 1].back() != words[idx][0])
                throw -1;
            
        
            if (mySet.find(words[idx]) != mySet.end())
                throw -1;
            
            mySet.insert(words[idx]);
        }
        catch (...)
        {
            return { idx % n + 1, idx / n + 1 };
        }
    }
    
    return { 0, 0 };
}
