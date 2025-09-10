#include <string>
#include <vector>

using namespace std;

// 스택
vector<int> solution(vector<int> prices) {
    vector<int> res(prices.size());
    vector<int> idxes;
    
    for (int idx = 0; idx < prices.size(); idx++)
    {
        if (idxes.size() == 0)
        {
            idxes.push_back(idx);
            
            continue;
        }
        
        int top = idxes.back();
        
        while (idxes.size() > 0)
        {
            int top = idxes.back();
            
            if (prices[top] <= prices[idx])
                break;
            
            res[top] = idx - top;
                
            idxes.pop_back();
        }
        
        idxes.push_back(idx);
    }
    
    for (int idx : idxes)
    {
        res[idx] = (prices.size() - 1) - idx;
    }
    
    return res;
}
