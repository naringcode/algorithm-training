#include <string>
#include <vector>

using namespace std;

// 완전 탐색
vector<int> solution(vector<int> prices) {
    vector<int> res;
    
    for (int idx = 0; idx < prices.size(); idx++)
    {
        int cmp;
        for (cmp = idx; cmp < prices.size() - 1; cmp++)
        {
            if (prices[idx] > prices[cmp])
                break;
        }
        
        res.push_back(cmp - idx);
    }
    
    return res;
}
