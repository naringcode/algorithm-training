#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n, int k, vector<string> cmd) {
    vector<int> deletedVec;
    vector<int> upVec;
    vector<int> downVec;
    
    for (int i = 0; i < n + 2; i++)
    {
        upVec.push_back(i - 1);
        downVec.push_back(i + 1);
    }
    
    k++;
    
    for (string& str : cmd)
    {
        if (str[0] == 'U')
        {
            string subStr = str.substr(2);
            int mv = atoi(subStr.c_str());
            
            for (int i = 0; i < mv; i++)
            {
                k = upVec[k];
            }
        }
        else if (str[0] == 'D')
        {
            string subStr = str.substr(2);
            int mv = atoi(subStr.c_str());
            
            for (int i = 0; i < mv; i++)
            {
                k = downVec[k];
            }
        }
        else if (str[0] == 'C')
        {
            deletedVec.push_back(k);
            
            downVec[upVec[k]] = downVec[k];
            upVec[downVec[k]] = upVec[k];
            
            if (downVec[k] == n + 1)
            {
                k = upVec[k];
            }
            else
            {
                k = downVec[k];
            }
        }
        else if (str[0] == 'Z')
        {
            int rs = deletedVec.back();
            deletedVec.pop_back();
            
            downVec[upVec[rs]] = rs;
            upVec[downVec[rs]] = rs;
        }
    }
    
    string res(n, 'O');
    
    for (int elem : deletedVec)
    {
        res[elem - 1] = 'X';
    }
    
    return res;
}
