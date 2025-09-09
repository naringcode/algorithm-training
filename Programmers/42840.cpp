#include <string>
#include <vector>
#include <set>

using namespace std;

int go(vector<int> pattern, vector<int>& answers)
{
    int ret = 0;
    
    for (int i = 0; i < answers.size(); i++)
    {
        if (pattern[i % pattern.size()] == answers[i])
        {
            ret++;
        }
    }
    
    return ret;
}

vector<int> solution(vector<int> answers) {
    int a = go({ 1, 2, 3, 4, 5 }, answers);
    int b = go({ 2, 1, 2, 3, 2, 4, 2, 5 }, answers);
    int c = go({ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 }, answers);
    
    int mx = max(max(a, b), c);
    
    vector<int> answer;
    
    if (mx == a)
    {
        answer.push_back(1);
    }
    
    if (mx == b)
    {
        answer.push_back(2);
    }
    
    if (mx == c)
    {
        answer.push_back(3);
    }
    
    return answer;
}
