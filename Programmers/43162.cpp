#include <string>
#include <vector>

using namespace std;

bool visited[204];

void dfs(int computer, vector<vector<int>>& computers)
{
    if (visited[computer] == true)
        return;
    
    visited[computer] = true;
    
    for (int i = 0; i < computers.size(); i++)
    {
        if (computers[computer][i] == 1)
        {
            dfs(i, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int ret = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i, computers);
            
            ret++;
        }
    }
    
    return ret;
}