#include <bits/stdc++.h>

using namespace std;

int sizeN;
vector<pair<int, int>> placed; // { y, x }

int res;

bool check(int nextY, int nextX)
{
    // check x
    for (auto [_, x] : placed)
    {
        if (x == nextX)
            return false;
    }
    
    // check diag
    for (auto [y, x] : placed)
    {
        if (abs(y - nextY) == abs(x - nextX))
            return false;
    }
    
    return true;
}

void go(int y)
{
    if (y == sizeN)
    {
        // for (auto [y, x] : placed)
        // {
        //     cout << y << ' ' << x << endl;
        // }
        
        res++;
        
        return;
    }
    
    for (int x = 0; x < sizeN; x++)
    {
        if (check(y, x) == false)
            continue;
        
        placed.push_back({ y, x });
        
        go(y + 1);
        
        placed.pop_back();
    }
}

int solution(int n) {
    sizeN = n;
    
    go(0);
    
    return res;
}
