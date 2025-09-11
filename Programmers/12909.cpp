#include <bits/stdc++.h>

using namespace std;

bool solution(string str)
{
    bool answer = false;

    vector<char> vec;
    
    for (char ch : str)
    {
        if (vec.size() == 0)
        {
            vec.push_back(ch);
            
            continue;
        }
        
        if (vec.back() == '(' && ch == ')')
        {
            vec.pop_back();
        }
        else
        {
            vec.push_back(ch);
        }
    }
    
    if (vec.size() == 0)
    {
        answer = true;
    }

    return answer;
}