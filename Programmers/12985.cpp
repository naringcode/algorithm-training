#include <bits/stdc++.h>

using namespace std;

int solution(int n, int a, int b)
{
    int ret = 0;
    
    while (a != b)
    {
        ret++;
        
        a = (a + 1) / 2;
        b = (b + 1) / 2;
    }
    
    return ret;
}
