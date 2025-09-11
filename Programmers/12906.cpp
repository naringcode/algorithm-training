#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> ret;

    for (int elem : arr)
    {
        if (ret.size() == 0)
        {
            ret.push_back(elem);
            
            continue;
        }
        
        if (ret.back() == elem)
            continue;
        
        ret.push_back(elem);
    }

    return ret;
}
