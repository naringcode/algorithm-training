#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    vector<char> vec;
    
    for (char ch : s)
    {
        if (vec.size() > 0 && ch == vec.back())
        {
            vec.pop_back();
            
            continue;
        }
        
        vec.push_back(ch);
    }

    return vec.empty() ? 1 : 0;
}
