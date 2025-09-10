#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    vector<vector<int>> stacks(board[0].size());
    vector<int> vec;
    
    int res = 0;
    
    for (int y = board.size() - 1; y >= 0; y--)
    {
        for (int x = 0; x < board[0].size(); x++)
        {
            if (board[y][x] == 0)
                continue;
            
            stacks[x].push_back(board[y][x]);
        }
    }
    
    for (int mv : moves)
    {
        if (stacks[mv - 1].size() == 0)
            continue;
     
        int top = stacks[mv - 1].back();
        stacks[mv - 1].pop_back();
        
        if (vec.size() > 0)
        {
            if (vec.back() == top)
            {
                vec.pop_back();
                res += 2;
                
                continue;
            }
        }
        
        vec.push_back(top);
    }
    
    return res;
}
