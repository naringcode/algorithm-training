#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int idxA = 0;
    int idxB = 0;
    
    cards1.push_back("TEMP");
    cards2.push_back("TEMP");
    
    for (int idxC = 0; idxC < goal.size(); idxC++)
    {
        if (cards1[idxA] == goal[idxC])
        {
            idxA++;
            
            continue;
        }
        else if (cards2[idxB] == goal[idxC])
        {
            idxB++;
            
            continue;
        }
        
        return "No";
    }
    
    return "Yes";
}
