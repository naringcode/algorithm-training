#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(string s) {
    stringstream ss(s);
    string str;
    
    int ret = 0;
    int prv = 0;
    
    while (ss >> str)
    {
        if (str == "Z")
        {
            ret -= prv;
            
            continue;
        }
        
        prv = atoi(str.c_str());
        ret += prv;
    }
    
    return ret;
}
