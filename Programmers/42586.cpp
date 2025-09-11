#include <string>
#include <vector>

using namespace std;

int go(int prog, int speed)
{
    int rem  = 100 - prog;
    int days = rem / speed;
    
    if (rem % speed != 0)
    {
        days++;
    }
    
    return days;
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> ret;
    
    for (int curr = 0; curr < progresses.size(); curr++)
    {
        int days = go(progresses[curr], speeds[curr]);
        int num  = 1;
        
        while (curr + 1 < progresses.size())
        {
            int nxtDays = go(progresses[curr + 1], speeds[curr + 1]);
            
            if (days < nxtDays)
                break;
            
            curr++;
            num++;
        }
        
        ret.push_back(num);
    }
    
    return ret;
}
