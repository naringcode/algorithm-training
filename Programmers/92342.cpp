#include <bits/stdc++.h>

using namespace std;

int res[11];
int arr[11]; // lion

int prevDiff = -1;

vector<int> info;

bool checkWin()
{
    int a = 0;
    int b = 0; // lion
    
    for (int idx = 0; idx < 11; idx++)
    {
        if (info[idx] == 0 && arr[idx] == 0)
            continue;
        
        int score = 10 - idx;
        
        if (info[idx] < arr[idx])
        {
            b += score;
        }
        else
        {
            a += score;
        }
    }
    
    if (a >= b)
        return false;
    
    int diff = b - a;
    if (prevDiff < diff)
    {
        prevDiff = diff;
     
        return true;
    }
    
    return false;
}

void go(int cnt, int idx)
{
    if (cnt == 0 || idx == -1)
    {
        arr[10] = cnt;
        
        if (checkWin())
        {
            copy(arr, arr + 11, res);
        }
        
        arr[10] = 0;
        
        return;
    }
    
    if (cnt > info[idx])
    {
        arr[idx] = info[idx] + 1;
        
        go(cnt - (info[idx] + 1), idx - 1);
        
        arr[idx] = 0;
    }
    
    go(cnt, idx - 1);
}

vector<int> solution(int n, vector<int> info) {
    ::info = info;
    
    go(n, 9);
    
    if (prevDiff == -1)
        return { -1 };
    
    return vector<int>(res, res + 11);
}
