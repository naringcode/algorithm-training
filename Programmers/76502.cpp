#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, char> mpOpposite{ 
    { ']', '[' }, { ')', '(' }, { '}', '{' }
};

int solution(string s) {
    int res = 0;
    
    int n = s.length();
    s += s;
    
    for (int cnt = 0; cnt < n; cnt++)
    {
        vector<char> vec;
        
        for (int idx = cnt; idx < cnt + n; idx++)
        {
            if (vec.size() > 0)
            {
                auto foundIter = mpOpposite.find(s[idx]);

                if (foundIter != mpOpposite.end() && vec.back() == foundIter->second)
                {
                    vec.pop_back();
                    
                    continue;
                }
            }
            
            vec.push_back(s[idx]);
        }
        
        if (vec.empty())
        {
            res++;
        }
    }
    
    return res;
}
